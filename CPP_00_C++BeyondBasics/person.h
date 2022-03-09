/*
 * person.h
 *
 *  Created on: Mar 9, 2022
 *      Author: anura
 */

#pragma once
#include <string>

class Person{
private:
	int id;
	std::string name;

public:
Person();
Person(int idvalue,std::string namevalue);
~Person();
std::string getName(){return name;};
int getId(){return id;};

};

