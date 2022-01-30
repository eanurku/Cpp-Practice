/*
 * resource.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */
#include "resource.h"
#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Resource::Resource(string name):resName(name){
	cout<<"Resource constructor called..."<<endl;
}
Resource::~Resource(){
	cout<<"Resource destructor called..."<<endl;
}
string Resource::getName(){
	return resName;
}

