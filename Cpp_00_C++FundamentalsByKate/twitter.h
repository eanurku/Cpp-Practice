/*
 * twitter.h
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#pragma once
#include "person.h"
#include <string>

class Twitter:public Person{

private:
	std::string twitterHandle;

public:
	Twitter(std::string firstname,std::string lastname,std::string handle);
	~Twitter();
	 std::string getName();



};
