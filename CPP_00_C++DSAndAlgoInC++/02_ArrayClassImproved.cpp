/*
 * 02_ArrayClassImproved.cpp
 *
 *  Created on: Mar 27, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class OutOfBoundArrayException : public std::exception{

};
class IntArray {
private:
	int size { 0 };
	int *m_ptr { nullptr };
public:
	IntArray() = default;
	explicit IntArray(int size) {
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

	int isvalidIndex(int index){
	  return index>=0 && index<this->size;
	}

	int& operator[](int index){
		if(!isvalidIndex(index)){
			throw OutOfBoundArrayException{};
		}
		return this->m_ptr[index];
	}
};

std::ostream& operator<<(std::ostream& os, IntArray& array) {

	os<<"[";
	for(int i=0;i<array.getSize();i++){
		os<<array[i]<<" ";
	}
	os<<"]";

	return os;
}

int main() {
	cout << "array class improvements" << endl; // prints !!!Hello World!!!

	IntArray array{10};

	//print array
	for(int i=0;i<array.getSize();i++){
		cout<<array[i]<<' ';
	}
	cout<<endl;

	for(int i=0;i<array.getSize();i++){
		array[i]=i+1;
	}

	//print array after  overloading operator <<
	cout<<array<<endl;

	return 0;
}




