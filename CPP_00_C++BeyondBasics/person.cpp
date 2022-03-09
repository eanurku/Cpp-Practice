/*
 * person.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: anura
 */

#include "person.h"
#include <iostream>
using namespace std;

Person::Person():id(-1),name("default"){

	cout<<"constructing person default"<<endl;
}

Person::Person(int id,string name):id(id),name(name){
	if(id==0){
		throw invalid_argument("there is invalid argument value for id");
	}

	cout<<"constructing person using constructor with args :"<<id<<" "<<name<<endl;
}
Person::~Person(){
	cout<<"calling person destructor"<<endl;
}


