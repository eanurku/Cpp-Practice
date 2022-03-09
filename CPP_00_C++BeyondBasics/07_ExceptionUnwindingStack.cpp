/*
 * 07_ExceptionUnwindingStack.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "person.h"
using namespace std;

int main() {
	vector<int> source(100);

	try {
		Person p1;
		Person p2(12,"gonu");

		Person p3(0,"error name");
		cout<<"this line wont run"<<endl;
		auto val = source.at(200);


	} catch (out_of_range &ex) {
		cout << "out of range error:"<<ex.what() << endl;
	} catch (invalid_argument &ex) {
		cout << "invalid argument error:"<<ex.what() << endl;
	}
	catch(exception& ex){
		cout<<"exception is thrown:"<<ex.what()<<endl;
	}
	return 0;
}

