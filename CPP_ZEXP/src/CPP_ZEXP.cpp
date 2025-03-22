//============================================================================
// Name        : CPP_ZEXP.cpp
// Author      : anurag
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string>
#include <time.h>

using namespace std;


int main(){

	auto idOdd=[](auto e){return e%2!=0;};
	cout<<idOdd(2)<<endl;

	if(0){
		cout<<"true";
	}

	return 0;
}
