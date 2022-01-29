/*
 * 04_TemplateFunction.cpp
 *
 *  Created on: Jan 28, 2022
 *      Author: anura
 */


#include <iostream>
using namespace std;

template<class T>

T maxFunc(T first,T second){

	return first>second?first:second;
}


int main() {


	cout<<maxFunc(10, 20)<<endl;
	cout<<maxFunc<int>(10, 20.9)<<endl;
	cout<<maxFunc<string>("mmm", "ppp")<<endl;


	return 0;
}


