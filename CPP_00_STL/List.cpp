//============================================================================
// Name        : List.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;

int main() {

	list<int> list = { 1, 2, 3, 4, 5 };
	for (int e : list) {
		cout << e << " ";
	}
	return 0;
}
