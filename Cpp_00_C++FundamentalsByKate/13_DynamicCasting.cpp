/*
 * 13_DynamicCasting.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include "person.h"
#include "twitter.h"
#include "resource.h"

using namespace std;

int main() {

	Twitter t1("monu", "kum", "#monukr");
	Person *p1Pointer = &t1;

	Twitter *t2;
	Resource res1("res name");

	string answer = "";
	cout << "enter answer( yes/no )" << endl;
	cin >> answer;
	if (answer == "yes") {
		t2 = dynamic_cast<Twitter*>(p1Pointer);
	} else {
		t2=dynamic_cast<Twitter*>(&res1);//Compiler ERROR if Resource is not having virtual functions
	}

	if (t2) {
		cout << "dynamic casting done... " << t2->getName() << endl;
	} else {
		cout << "dynamic casting not done..." <<t2->getName()<< endl;
	}

	cout<<"successfull!!!"<<endl;
	return 0;
}
