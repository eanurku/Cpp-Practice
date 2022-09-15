/*
 * 01_DiffTime.cpp
 *
 *  Created on: Sep 15, 2022
 *      Author: anura
 */



#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
#include <list>
#include <map>
#include <unordered_map>
#include <sstream>
#include <iomanip>
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

