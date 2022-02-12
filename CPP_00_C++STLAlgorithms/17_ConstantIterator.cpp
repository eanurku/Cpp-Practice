/*
 * 17_ConstantIterator.cpp
 *
 *  Created on: Feb 12, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<int> list{4,3,9,5,6,1,2,7,8};
	//sort(cbegin(list),cend(list)); compiler ERROR as const iterator do not allow modifications
	cout<<"after sort"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	return 0;
}



