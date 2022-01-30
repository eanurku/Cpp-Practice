/*
 * 09_PolymorphismUsingVirtualFunctions.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */


#include <iostream>
#include "twitter.h"

using namespace std;

int main() {

	//inheritance
	Twitter twitter1("monu","kumar","#monuk");
	cout<<twitter1.getName()<<endl;

	//assign child instance to parent reference/pointer
	//parent getName() called instead of child instance by default
	//make getName() function virtual ,so that overridden method in child is called .
	Person& p1=twitter1;
	Person* p11=&twitter1;
	cout<<p1.getName()<<" "<<p11->getName()<<endl;





	return 0;
}


