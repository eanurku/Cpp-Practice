//============================================================================
// Name        : Test.cpp
// Author      : anurag
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void) {
	int x=33;
	auto twiceFunc=[=]() mutable {return x=x*2;};
	cout<<twiceFunc()<<" "<<x;
	return EXIT_SUCCESS;
}
