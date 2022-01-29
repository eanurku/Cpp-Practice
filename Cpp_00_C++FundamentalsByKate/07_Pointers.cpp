/*
 * 07_Pointers.cpp
 *
 *  Created on: Jan 28, 2022
 *      Author: anura
 */

#include <iostream>
using namespace std;

int main() {
	int num = 30;
	int *pointerToNum = &num;
	cout << num << " " << *pointerToNum << endl;
	*pointerToNum = 33;
	cout << num << " " << *pointerToNum << endl;

	int newNum = 55;
	pointerToNum = &newNum;
	*pointerToNum += 10;
	cout << num << " " << newNum << " " << *pointerToNum << endl;


	pointerToNum = nullptr; //pointer to NULL
	if (pointerToNum) {

		cout << "pointer is not null and its value=" << *pointerToNum << endl;
	} else if(pointerToNum == nullptr){

		cout << "pointer is null" << endl;
		//cout << *pointerToNum << endl; //ERROR:this will crash the running program
	}

	pointerToNum=&num;
	cout<<*pointerToNum<<endl;

	int** doublePonter=&pointerToNum;
	**doublePonter+=110;

	cout<<*pointerToNum<<" double pointer dereferenced value="<<**doublePonter<<endl;

	//pointer to const
	int const* pointerToConst=&num;
	//*pointerToConst=100;//ERROR as pointer cannot modify value it is pointing
	pointerToConst=&newNum;
	cout<<"after changing the pointed location pointer to const="<<*pointerToConst<<endl;

	//const pointer to int
	int*  const constPointer=&num;
	cout<<"before increment const pointer to int="<<*constPointer<<endl;
	*constPointer+=12;
	cout<<"after increment const pointer to int="<<*constPointer<<endl;
	//constPointer=&newNum;//ERROR as const pointer cannot point to other location once initialized

	//const pointer to const
	int const* const constPointerToConst=&num;
	cout<<"const pointer to const="<<*constPointerToConst<<endl;
	//constPointerToConst=&newNum;//ERROR cannot point to other location
	//*constPointerToConst=344;//ERROR cannot modify the value it is pointing


	return 0;
}

