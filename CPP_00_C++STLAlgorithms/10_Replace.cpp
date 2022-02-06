/*
 * 10_Replace.cpp
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
	vector<int> source{-1,2,3,4,5,-1,5,6,-1,2};

	//replace()
	auto v1=source;
	cout<<"replace()"<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	replace(begin(v1), end(v1), -1, 99);
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;

	//replace_if()
	auto v2=source;
	cout<<"replace()"<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	replace_if(begin(v2), end(v2), [](auto e){if(e<0) return true;return false;}, 0);
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	return 0;

}



