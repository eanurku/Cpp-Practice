/*
 * 02_LambdaAsTinyFunctions.cpp
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

	auto isOdd=[](auto e){return e%2!=0;};
	auto isEven=[](auto e){return e%2==0;};

	vector<int> list{1,2,3,4,5,6,7,8,9};

	//count odds
	auto result=count_if(begin(list),end(list), isOdd);
	cout<<"count of odds="<<result<<endl;

	//count evens
	result=count_if(begin(list), end(list), isEven);
	cout<<"count of evens="<<result<<endl;

	return 0;
}



