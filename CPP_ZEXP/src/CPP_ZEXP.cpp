//============================================================================
// Name        : CPP_ZEXP.cpp
// Author      : anurag
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std::chrono;
using namespace std::chrono;
using namespace std;
int main(){

	time_point<system_clock> start,end;


	start=system_clock::now();

	for (int var = 0; var < 1000000; ++var) {

	}
	end=system_clock::now();

	duration<double> time=end-start;

	cout<<time.count();

	return 0;
}
