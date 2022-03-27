/*
 * 05_ArrayMoveConstructor.cpp
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

	//custom copy constructor
	IntArray(const IntArray &source) {
		cout<<"custom copy constructor is called..."<<endl;
		if (source.size != 0) {
			m_ptr = new int[source.size];
			size = source.size;
			for (int i = 0; i < source.size; i++) {
				m_ptr[i] = source.m_ptr[i];
			}
		}
	}

	//move constructor
	IntArray(IntArray&& source){
		cout<<" move constructor is called..."<<endl;
		//transfer data
		m_ptr=source.m_ptr;
		size=source.size;

		//clear
		source.m_ptr=nullptr;
		source.size=0;
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

	IntArray& operator=(IntArray source) { //copy by custom constructor for  parameter source
		cout<<"custom copy assignment is called"<<endl;
		//swap pointers and size
		int *tmpPtr = source.m_ptr;
		source.m_ptr = m_ptr;
		m_ptr = tmpPtr;
		int tmpValue = source.size;
		source.size = size;
		size = tmpValue;
		return *this;
		//source destructor will be called to clean up old values
	}
};

IntArray fun(IntArray& array){
	array[0]=100;
	IntArray b=array;

	return std::move(b);
}

int main() {
	IntArray firstArray{10};
	IntArray newArray=fun(firstArray);

	cout<<newArray<<endl;

	return 0;
}
