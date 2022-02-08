/*
 * 16_FronInserterIterator.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	deque<int> deque;
	fill_n(front_inserter(deque),10, 5);
	generate_n(front_inserter(deque), 10, [n=0]()mutable{n++;return n;});
	cout<<"deque is:"<<endl;
	for_each(begin(deque),end(deque),[](auto e){cout<<e<<" ";});cout<<endl;


	return 0;
}




