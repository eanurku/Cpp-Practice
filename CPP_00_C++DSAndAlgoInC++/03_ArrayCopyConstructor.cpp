/*
 * 03_CopyInitialization.cpp
 *
 *  Created on: Mar 27, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
class OutOfBoundArrayException: public std::exception {

};
class IntArray {
private:
	int size { 0 };
	int *m_ptr { nullptr };
public:
	IntArray() = default;
	//avoid use of default copy constructor by marking it deleted function
	//IntArray(const IntArray&) = delete ;

	IntArray(const IntArray &source) {
		if (source.size != 0) {
			m_ptr = new int[source.size];
			size = source.size;
			for (int i = 0; i < source.size; i++) {
				m_ptr[i] = source.m_ptr[i];
			}
		}
	}

	explicit IntArray(int size) {
		if (size != 0) {
			this->m_ptr = new int[size] { };
			this->size = size;
		}
	}
	~IntArray() {
		delete[] this->m_ptr;
	}

	int getSize() const { //const is added to make return value as read-only

		return this->size;
	}

	bool isEmpty() {
		return size == 0;
	}

	int isvalidIndex(int index) {
		return index >= 0 && index < this->size;
	}

	int& operator[](int index) {
		if (!isvalidIndex(index)) {
			throw OutOfBoundArrayException { };
		}
		return this->m_ptr[index];
	}

	//Overloading of operator<<  can be done by friend function/free function
	friend std::ostream& operator<<(std::ostream &os, IntArray &array) {

		os << "[";
		for (int i = 0; i < array.getSize(); i++) {
			os << array[i] << " ";
		}
		os << "]";

		return os;
	}
};
int main() {
	cout << "copy constructor" << endl;

	//print array
	IntArray firstArray { 10 };
	cout << firstArray << endl;

	//copy arrays : shallow copy due to default copy constructor by compiler
	IntArray secondArray = firstArray; //this line will throw error if copy constructor is deleted function
	firstArray[4] = 12;
	firstArray[1] = 14;
	cout << "first array " << firstArray << endl;
	cout << "second array " << secondArray << endl;

	//copy arrays: deep copy using custom copy constructor
	IntArray thirdArray = firstArray;
	thirdArray[2] = 99;
	cout << "first array " << firstArray << endl;
	cout << "third array " << thirdArray << endl;

	return 0;
}

