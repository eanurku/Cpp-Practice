/*
 * 09_ListAccessElements.cpp
 *
 *  Created on: Apr 26, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <list>
using namespace std;

int main() {
	list<int> list{10,20,30,33,40,45,60};

	//access first and last
	cout<<"list first element="<<list.front()<<endl;
	cout<<"list last element="<<list.back()<<endl;

	//acess nth element
	int n;
	cin>>n;
	auto postIterator=list.begin();
	std::advance(postIterator,n-1);

	cout<<"element at "<<n<<"th position ="<<*postIterator<<endl;

	//bidirectionaliterator
	postIterator++;
	cout<<"after postIterator++ "<<*postIterator<<endl;
	postIterator--;
	cout<<"after postIterator-- "<<*postIterator<<endl;

	return 0;
}



