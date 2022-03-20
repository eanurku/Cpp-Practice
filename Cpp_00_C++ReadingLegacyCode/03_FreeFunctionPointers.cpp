/*
 * 03_FreeFunctionPointers.cpp
 *
 *  Created on: Mar 20, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int add(int a,int b){
	return a+b;
}
int subtract(int a,int b){
	return a-b;
}

typedef int (*operation)(int ,int);

int main() {
	cout << "function pointers" << endl; // prints !!!Hello World!!!


	int array[]={1,2,3,4,5,6};
	int size=6;

	operation op=add;
	int total=0;
	for(int i=0;i<size;i++){
		total=op(total,array[i]);
	}
	cout<<"sum of numbers = "<<total<<endl;

	op=subtract;
	total=op(total,array[size-1]);
	cout<<"sum of numbers with last element= "<<total<<endl;


	return 0;
}




