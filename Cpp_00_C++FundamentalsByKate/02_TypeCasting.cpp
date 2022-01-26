/*
 * 02_TypeCasting.cpp
 *
 *  Created on: Jan 26, 2022
 *      Author: anura
 */

#include <iostream>
using namespace std;

int main() {

	int intvalue;
	int anotherIntvalue;
	float floatValue = 5.8;

	intvalue = floatValue;
	anotherIntvalue = static_cast<int>(floatValue);//no warning by compiler in  demotion scenario

	cout << intvalue << " " << anotherIntvalue << " " << floatValue << "\n";

	return 0;
}

