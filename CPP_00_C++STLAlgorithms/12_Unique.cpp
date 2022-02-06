/*
 * 12_Unique.cpp
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
	vector<int> source{1,2,3,4,5,6,7,1,2,3};

	//unique()it remove adjacent duplicates only
	auto v1=source;
	cout<<"apply unique() without sort()"<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	v1.erase(unique(begin(v1), end(v1)),end(v1));
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//unique():do sort() first then apply unique()
	auto v2=source;
	sort(begin(v2),end(v2));
	cout<<"unique() after sort()"<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	v2.erase(unique(begin(v2), end(v2)),end(v2));
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;


	//unique_copy()
	auto v3=source;
	vector<int> v4(source.size());
	cout<<"unique_copy()"<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;
	sort(begin(v3),end(v3));
    unique_copy(begin(v3), end(v3), begin(v4));
    for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;

	return 0;
}



