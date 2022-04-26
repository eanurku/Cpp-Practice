/*
 * 06_ArrayInitialization.cpp
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

	//initialization
	array<int,10> arr1={1,2,3};

	for(auto e:arr1){
		cout<<e<<" ";
	}
	cout<<endl;

	//
	array<int,10> arr2{1,2,3};
	for(auto e:arr2){
		cout<<e<<" ";
	}
	cout<<endl;


	return 0;
}




