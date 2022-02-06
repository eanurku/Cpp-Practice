/*
 * 14_swap.cpp
 *
 *  Created on: Feb 6, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

    //iter_swap()
	vector<int> source{1,2,3,4,5,6};
	for_each(begin(source),end(source),[](auto e){cout<<e<<" ";});cout<<endl;
	iter_swap(begin(source), end(source)-1);
	for_each(begin(source),end(source),[](auto e){cout<<e<<" ";});cout<<endl;

	return 0;
}


