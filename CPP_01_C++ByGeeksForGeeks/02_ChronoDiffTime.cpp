/*
 * 02_ChronoDiffTime.cpp
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
#include <ctime>
#include <chrono>
#define LOOP(i,n) for(int i=0;i<=n;i++)
using namespace std;

int main() {

	std::chrono::time_point<std::chrono::system_clock> start,end;

   start=std::chrono::system_clock::now();

	LOOP(i,1000000000){
		;
	}

	end=std::chrono::system_clock::now();

	std::chrono::duration<double> time=end-start;
	cout<<"chrono time="<<time.count()<<endl;

	return EXIT_SUCCESS;
}

