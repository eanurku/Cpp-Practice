/*
 * 06_ForEachLoop.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	vector<int> list(10);
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;


	for_each(begin(list), end(list), [](auto e){cout<<e<<" ";});
	cout<<endl;

	for_each(begin(list), end(list), [](auto& e){e=5;});

	for_each(begin(list), end(list), [](auto e){cout<<e<<" ";});
	cout<<endl;

	return 0;
}


