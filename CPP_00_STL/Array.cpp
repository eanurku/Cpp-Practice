//============================================================================
// Name        : Array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<array>
using namespace std;

int main() {


	int i;

	array<int,5> arraylist;//size is fixed and will be constant value

	for( i=0;i<arraylist.size();i++){

		cin>>arraylist[i];
	}

	for(int e:arraylist){

		cout<<e<<" ";
	}
}
