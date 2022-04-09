/*
 * 06_ArrayClassTemplate.cpp
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

template <typename T>
class ArrayClass {
private:
	int size { 0 };
	T* m_ptr { nullptr };
public:
	ArrayClass() = default;
	//avoid use of default copy constructor by marking it deleted function
	//IntArray(const IntArray&) = delete ;

	//custom copy constructor
	ArrayClass(const ArrayClass &source) {
		cout<<"custom copy constructor is called..."<<endl;
		if (source.size != 0) {
			m_ptr = new T[source.size];
			size = source.size;
			for (int i = 0; i < source.size; i++) {
				m_ptr[i] = source.m_ptr[i];
			}
		}
	}

	//move constructor
	ArrayClass(ArrayClass&& source){
		cout<<" move constructor is called..."<<endl;
		//transfer data
		m_ptr=source.m_ptr;
		size=source.size;

		//clear
		source.m_ptr=nullptr;
		source.size=0;
	}
	explicit ArrayClass(int size) {
		if (size != 0) {
			this->m_ptr = new T[size] { };
			this->size = size;
		}
	}


	~ArrayClass() {
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
	friend std::ostream& operator<<(std::ostream &os, ArrayClass &array) {


		os << "[";
		for (int i = 0; i < array.getSize(); i++) {
			os << array[i] << " ";
		}
		os << "]";

		return os;
	}

	ArrayClass& operator=(ArrayClass source) { //copy by custom constructor for  parameter source
		cout<<"custom copy assignment is called"<<endl;
		//swap pointers and size
		T *tmpPtr = source.m_ptr;
		source.m_ptr = m_ptr;
		m_ptr = tmpPtr;
		int tmpValue = source.size;
		source.size = size;
		size = tmpValue;
		return *this;
		//source destructor will be called to clean up old values
	}
};
ArrayClass<int> fun(ArrayClass<int>& array){
	array[0]=100;
	ArrayClass<int> b=array;

	return std::move(b);
}
int main() {

	ArrayClass<int> firstArray{10};
	ArrayClass<int> newArray=fun(firstArray);

	cout<<newArray<<endl;
	return 0;
}



