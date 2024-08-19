//============================================================================
// Name        : Algorithms.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

//sort
	int array[]={12,1,3,4,5,12,32,24};
	int size=sizeof(array)/sizeof(array[0]);
	sort(array,array+size);
	for(int e:array){
		cout<<e<<" ";
	}
	cout<<endl;

	vector<int> vect={12,1,3,4,5,12,32,24};
	sort(vect.begin(),vect.end());
	for(int e:vect){
		cout<<e<<" ";
	}
	cout<<endl;

//binary search

	return 0;
}
