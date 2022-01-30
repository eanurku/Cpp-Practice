/*
 * twitter.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include "twitter.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Twitter::Twitter(string firstname,string lastname,string handle):Person(firstname,lastname),twitterHandle(handle){
	cout<<"twitter(string,string,string) constructor called..."<<endl;
}

Twitter::~Twitter(){
	cout<<"twitter destructor called..."<<endl;
}

 string Twitter::getName(){
	return Person::getName()+ " "+ twitterHandle;
}

