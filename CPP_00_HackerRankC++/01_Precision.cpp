/*
 * 01_Precision.cpp
 *
 *  Created on: May 1, 2022
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
#include <iomanip>

using namespace std;

int main() {

	float floatValue;
	double doubleValue;

	cin>>floatValue;
	cin>>doubleValue;

	cout<<fixed<<setprecision(3)<<floatValue<<endl;
	cout<<fixed<<setprecision(3)<<doubleValue<<endl;

	return 0;
}



