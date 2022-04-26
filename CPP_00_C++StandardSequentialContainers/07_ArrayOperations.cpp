/*
 * 07_ArrayOperations.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
using namespace std;

int main() {
	//
	array<int,5> arr1{1,2,3,4,5};
	for(auto e:arr1){
		cout<<e<<" ";
	}
	cout<<endl;

	//array accessing elements
	cout<<arr1[3]<<" "<<arr1.at(3)<<endl;

	//data() to work with legacy code
	int* pointer=arr1.data();
	cout<<*(pointer+3)<<endl;

	//copy assignment
	//array need to be of  same size
	array<int ,5> arr2={10,20,30};
	arr2=arr1;
	for(auto e:arr2){
		cout<<e<<" ";
	}
	cout<<endl;

	//find
	auto found=find(begin(arr2),end(arr2),5);
	if(found!=end(arr2)){
		cout<<"found at pos="<<found-begin(arr2)+1<<endl;
	}else{
		cout<<"Not found "<<endl;;
	}
	//binary search
	found=lower_bound(begin(arr2),end(arr2),4);
	if(found!=end(arr2)){
		cout<<"found at pos="<<found-begin(arr2)+1<<endl;
	}else{
		cout<<"Not found "<<endl;;
	}

	return 0;
}


