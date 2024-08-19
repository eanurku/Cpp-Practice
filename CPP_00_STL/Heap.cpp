//============================================================================
// Name        : Heap.cpp
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


	vector<int> v1={21,23,1,2,3,43,22};

	cout<<"is heap="<<is_heap(v1.begin(),v1.end())<<endl;

	make_heap(v1.begin(),v1.end());

	cout<<"is heap="<<is_heap(v1.begin(),v1.end())<<endl;

	cout<<endl;
	for(int e:v1)
		cout<<e<<" ";

	cout<<"\n"<<v1.front()<<endl;


	v1.push_back(130);
	cout<<endl;
	for(int e:v1)
		cout<<e<<" ";


	push_heap(v1.begin(),v1.end());

	cout<<endl;
	for(int e:v1)
		cout<<e<<" ";

	cout<<"\n"<<v1.front()<<endl;
	pop_heap(v1.begin(),v1.end());

	cout<<endl;
	for(int e:v1)
		cout<<e<<" ";

	return 0;
}
