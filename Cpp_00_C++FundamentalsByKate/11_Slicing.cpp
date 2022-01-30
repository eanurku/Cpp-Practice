/*
 * 11_Slicing.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */



#include <iostream>
#include "person.h"
#include "twitter.h"
using namespace std;
void func(Person p){// slicing happens here

	cout<<p.getName()<<endl;

}
int main() {

	Person p1("monu","kumar");
	Twitter t1("gonu","kum","#gonukrr");

	cout<<p1.getName()<<" "<<t1.getName()<<endl;

	p1=t1;//copy child object to parent object,causes slicing

	cout<<p1.getName()<<endl;//child overridden function is not called as it is sliced already and not available.

	func(t1);




	return 0;
}

