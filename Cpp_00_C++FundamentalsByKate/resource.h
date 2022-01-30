/*
 * resource.h
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#pragma once
#include <string>

class Resource{
private:
	std::string resName;
public:
	Resource(std::string name);
	virtual ~Resource();
	virtual std::string getName();
};
