/*
 * 03_StringInitialization.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
using namespace std;

int main() {
	cout << "!!!Hello World!!  !" << endl; // prints !!!Hello World!!!
	string str1;
	string str2{};
	string str3();


	cout<<str1.length()<<endl;
	cout<<str2.length()<<endl;
	cout<<str3<<endl;

	string message;
	getline(cin,message);

	string flowerLine(message.length()+4,'*');

	cout<<flowerLine<<endl;
	cout<<"* "<<message<<" *"<<endl;
	cout<<flowerLine<<endl;

	return 0;
}



