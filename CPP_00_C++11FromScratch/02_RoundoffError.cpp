/*
 * 02_RoundoffError.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	cout<<"roundoff with error"<<endl;
	double a=0.3;
	double b=0.1+0.1+0.1;

	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<(a==b?"true":"false")<<endl;

	cout<<"roundoff without error"<<endl;
	double a1=0.5;
	double b1=0.3+0.1+0.1;
	cout<<(a1==b1?"true":"false")<<endl;

	return 0;
}



