/*
 * 01_ArrayClass.cpp
 *
 *  Created on: Mar 21, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cassert>
using namespace std;

class OutOfBoundArrayException : public std::exception{

};
class IntArray {
private:
	int size { 0 };
	int *m_ptr { nullptr };
public:
	IntArray() = default;
	IntArray(int size) {
		if (size != 0) {
			this->m_ptr = new int[size] { };
			this->size = size;
		}
	}
	~IntArray() {
		delete[] this->m_ptr;
	}

	int getSize() const {//const is added to make return value as read-only

		return this->size;
	}

	bool isEmpty() {
		return size == 0;
	}

	int& operator[](int index){
		if(!isvalidIndex(index)){
			throw OutOfBoundArrayException{};
		}
		return this->m_ptr[index];
	}

	int isvalidIndex(int index){
	  return index>=0 && index<this->size;
	}

};

int main() {
	cout << "custom Array" << endl; // prints !!!Hello World!!!
	IntArray array{10};
	cout<<"array size="<<array.getSize()<<endl;
	cout<<"array is empty="<<array.isEmpty()<<endl;
	assert(!array.isEmpty());

	for(int i=0;i<array.getSize();i++){
		cout<<" "<<array[i];
	}
	cout<<endl;
//	array.getSize()=12;//mark getSize with const so that return value is read only

	array[6]=12;
	array[5]=44;
	for(int i=0;i<array.getSize();i++){
		cout<<" "<<array[i];
	}
	cout<<endl;


	try{
		cout<<"array element ="<<array[100]<<endl;
	}
	catch(OutOfBoundArrayException& e){
         cout<<endl<<"ERROR: invalid array index accessed"<<endl;
	}

	cout<<"end of code"<<endl;
	return 0;
}

