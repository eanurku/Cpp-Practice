/*
 * 01_LambdaAsReplacementToTinyFunctions.cpp
 *
 *  Created on: Feb 14, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	auto isOdd=[](auto e){return e%2!=0l;};
	bool result=isOdd(5);
	cout<<result<<endl;

	return 0;
}



