/*
 * 03_CustomClass.cpp
 *
 *  Created on: Jan 26, 2022
 *      Author: anura
 */

#include <iostream>
#include "person.h"
using namespace std;

int main() {

	Person p1("sonu","kumar");
	Person p2;

	cout<<p1.getName()<<endl;
	cout<<p2.getName()<<endl;

	return 0;
}



