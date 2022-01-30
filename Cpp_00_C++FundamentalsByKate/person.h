/*
 * Person.h
 *
 *  Created on: Jan 26, 2022
 *      Author: anura
 */
#pragma once
#include <iostream>

class Person {

private:
	std::string firstName;
	std::string lastName;
public:
	Person()=default;
	Person(std::string firstname, std::string secondname);
	virtual std::string getName();
	virtual ~Person();

};
