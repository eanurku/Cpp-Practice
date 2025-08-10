/*
 * 17_PartialSortCopy.cpp
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

	//partial sort
	vector<int> list{2,5,4,3,1,7,8,6,9,11,10};

	cout<<"before partial sort"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	partial_sort(begin(list), begin(list)+3, end(list));

	cout<<"after partial sort"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;


	//partial sort copy
	vector<int> list2{2,5,4,3,1,7,8,6,9,11,10};
	int pageSize=4;
	vector<int> copyList(pageSize);

	cout<<"before partial sort"<<endl;
	for_each(begin(list2),end(list2),[](auto e){cout<<e<<" ";});cout<<endl;

	partial_sort_copy(begin(list2),end(list2),begin(copyList),end(copyList));

	cout<<"after partial sort: first page "<<endl;
	for_each(begin(copyList),end(copyList),[](auto e){cout<<e<<" ";});cout<<endl;



	cout<<"before partial sort:second page "<<endl;
	for_each(begin(list2), end(list2), [](auto e){cout<<e<<" ";});cout<<endl;

	auto res=partial_sort_copy(begin(list2), end(list2), begin(copyList), end(copyList));

	cout<<"after partial sort:second page "<<*res <<endl;

	for_each(begin(copyList), end(copyList), [](auto e){cout<<e<<" ";});cout<<endl;
	return 0;




}

