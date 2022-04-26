/*
 * 10_ListSorting.cpp
 *
 *  Created on: Apr 26, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <list>
using namespace std;

int main() {
	list<int> list{3,20,1,22,40,4,44};
	list.sort();

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;


	list.sort([](auto a,auto b){return a>b;});
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;
	return 0;
}



