/*
 * 21_partitions.cpp
 *
 *  Created on: Feb 13, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<int> source{1,2,3,4,5,6,7,8,9};

	//partition()
	vector<int> list=source;

	cout<<"before partition()"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	partition(begin(list), end(list), [](auto e){return e%2==0;});

	cout<<"after partition()"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//stable_partition()
	list=source;

	cout<<"before partition()"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	stable_partition(begin(list), end(list), [](auto e){return e%2==0;});

	cout<<"after partition()"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	return 0;
}


