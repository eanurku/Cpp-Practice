/*
 * 04_Const.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: anurag
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	cout << "const vs constexpr" << endl;
	const int a=10;
	//a=20;//throws read only variable error

	constexpr int b=33;
	//b=44;//throws read only variable error

	return 0;
}


