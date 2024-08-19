//============================================================================
// Name        : CPP_ZEXP.cpp
// Author      : anurag
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <algorithm>
#include <chrono>
#include <deque>

using namespace std::chrono;
using namespace std::chrono;
using namespace std;

void printMax(int array[],int n,int k){

	deque<int> DQ;

	for (int i = 0; i < k; ++i) {

		if (DQ.empty()) {
			DQ.push_back(i);
		} else {

			while (!DQ.empty() && array[i] > array[DQ.back()]) {
				DQ.pop_back();
			}
			DQ.push_back(i);
		}
	}


	for (int i = k; i < n; ++i) {
		//print max of previous window
		cout << array[DQ.front()] << " ";
		//remove extra element of previous window

		while (!DQ.empty() && DQ.front() <= i - k) {
			DQ.pop_front();
		}

		//insert element from back

		while (!DQ.empty() && array[i] > array[DQ.back()]) {
			DQ.pop_back();
		}
		DQ.push_back(i);

	}

	cout<<array[DQ.front()];


}
int main(){

	int n,k,array[100];

	cin>>n>>k;
	for (int i = 0; i < n; ++i) {
		cin>>array[i];
	}

	for_each(begin(array), begin(array)+n, [](auto e){cout<<e<<" ";});

	cout<<endl;

	printMax(array,n,k);
	return 0;
}
