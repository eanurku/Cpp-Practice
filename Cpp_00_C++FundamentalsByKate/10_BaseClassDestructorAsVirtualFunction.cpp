/*
 * 10_baseClassDestructorAsVirtualFunction.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include "twitter.h"
using namespace std;

int main() {

	//if parent destructor is not virtual then parent reference of even child instance will call parent destructor.
	//so child destructor will not be called which is major issue.
	//make parent destructor also virtual so that child destructor is called and then other destructor in chain...
	Person* p2=new Twitter("gonu","kumar","#gonuk");
	delete p2;


	return 0;
}



