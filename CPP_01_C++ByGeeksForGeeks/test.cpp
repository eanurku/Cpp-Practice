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
#include <ctime>
#define LOOP(i,n) for(int i=0;i<=n;i++)
using namespace std;

int main(void) {
	time_t start,end;
	time(&start);
	LOOP(i,1000000000){
		;
	}

	time(&end);
	cout<<"time="<<difftime(end,start);
	return EXIT_SUCCESS;
}
