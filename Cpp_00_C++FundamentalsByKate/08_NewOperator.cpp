/*
 * 08_NewOperator.cpp
 *
 *  Created on: Jan 29, 2022
 *      Author: anura
 */


#include <iostream>
#include "person.h"
using namespace std;

int main() {
	{
		Person p1("gonu","kumar");
		cout<<p1.getName()<<endl;
	}

	Person* p2=new Person("monu","kumar");
	Person* p3=p2;
	cout<<p2->getName()<<" "<<p3->getName()<<endl;
	delete p2;
	delete p2;


	cout<<p2->getName()<<endl;//ERROR as p2 is deleted/freed
	cout<<p3->getName()<<endl;//ERROR as p3 and p2 are pointing same object and it is already deleted


	return 0;
}



