/*
 * Person.cpp
 *
 *  Created on: Jan 26, 2022
 *      Author: anura
 */

#include "person.h"
using namespace std;

//constructor
//Person::Person(){}; default assigned in header file for default constructor

Person::Person(string first,string last):firstName(first),lastName(last)
{

};

string Person::getName(){
	return firstName+" "+lastName;
}



