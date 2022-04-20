/*
 * 05_FunctionPassingParameters.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

//Copy
void functionPassingByValue(int first,int second){

	first=first+10;
	second+=second+10;
}
//No Copy
void functionPassingByReference(int& first,int& second){

	first+=20;
	second+=20;
}

//No Copy and Read only Access
void functionPassingByConstReference(int const& first,int const& second){

	//first+=20; //Read only reference error
	//second+=20;//Read only reference error
}

int main() {

	//function Passing By Value
	cout << "<<<<<<<< function Passing By Value >>>>>>>>>>" << endl;
	int x=12,y=24;
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;
	functionPassingByValue(x,y);
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;
	cout<<endl;

	//function Passing By reference
	cout << "<<<<<<<< function Passing By reference >>>>>>>>>>" << endl;
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;
	functionPassingByReference(x,y);
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;
	cout<<endl;

	//function Passing By const reference
	cout << "<<<<<<<< function Passing By const reference >>>>>>>>>>" << endl;
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;
	functionPassingByConstReference(x,y);
	cout<<"before function call : "<<"x="<<x<<" y="<<y<<endl;


	return 0;
}



