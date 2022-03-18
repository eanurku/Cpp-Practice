/*
 * 01_CStyleArray.cpp
 *
 *  Created on: Mar 18, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	int staticArray[] = { 1, 2, 3, 4, 5, 6 };
	int size = 6;
	cout << "static array " << endl;
	for (int *ptr = staticArray; ptr < staticArray + size; ptr++) {
		*ptr += 10;
		cout << " " << *ptr;
	}
	cout << endl;

	int *dynamicArray = new int[size];
	for (int i = 0; i < size; i++) {
		dynamicArray[i] = staticArray[i];

	}

	cout << "dynamic array " << endl;
	for (int i = 0; i < size; i++) {
		cout << " " << dynamicArray[i];
	}
	cout << endl;

	cout << "size of staticArray="<< sizeof(staticArray) / sizeof(staticArray[0]) << endl;
	cout << "size of dynamicArray=" << sizeof(dynamicArray)/sizeof(dynamicArray[0]) << endl;

	delete[] dynamicArray;

	cout << "dynamic array after delete" << endl;
	for (int i = 0; i < size; i++) {
		cout << " " << dynamicArray[i];

	}

	return 0;
}

