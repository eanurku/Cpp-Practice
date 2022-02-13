/*
 * 19_Swap.cpp
 *
 *  Created on: Feb 12, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <utility>
using namespace std;

int main() {

	vector<int> list{1,2,3,4,5,6,7,8,9};
	cout<<"current list "<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;
	//swap
	int first=10;
	int second=20;
	cout<<"swap()"<<endl;
	cout<<"a="<<first<<" ,b="<<second<<endl;
	//swap(first, second);//WHY compiler showing it error on swap()?
	cout<<"a="<<first<<" ,b="<<second<<endl;
	cout<<endl;

	//swap() on collection

	//swap(list[0],list[1]);WHY compiler showing it error on swap()?
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;
	//iter_swap
	vector<int> v1=list;
	iter_swap(begin(v1),begin(v1)+4);
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//swap_range() in same collection
	vector<int> v2=list;
	swap_ranges(begin(v2), begin(v2)+3, rbegin(v2));
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//swap_range() between  different collection
	vector<int> v3=list;
	vector<int> v4=list;
	swap_ranges(begin(v3), begin(v3)+3, rbegin(v4));
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;


	return 0;
}



