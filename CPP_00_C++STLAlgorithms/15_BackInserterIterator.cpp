/*
 * 15_BackInserterIterator.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<int> v1;
	fill_n(back_inserter(v1), 10, 2);
	cout<<"v1 is:"<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;

	return 0;
}



