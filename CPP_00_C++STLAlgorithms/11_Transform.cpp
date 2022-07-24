/*
 * 11_Transform.cpp
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
	vector<int> source{1,2,3,4,5,6};

	//transform()
	auto v1=source;
	cout<<"transform()"<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	transform(begin(v1), end(v1), begin(v1), [](auto e){return e*2;});
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//transform
	auto v2=source;
	auto v3=source;
	vector<int> v4(source.size());
	cout<<"transform() operate on elements from two list and transform third list"<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;
	transform(begin(v2), end(v2), begin(v3), begin(v4), [](auto e1,auto e2){return e1+e2;});
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;
	return 0;
}



