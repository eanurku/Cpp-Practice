/*
 * 20_Rotate.cpp
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
	vector<int> list;

	//rotate() move 7 to position of 2
	list=source;
	cout<<"before rotation"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	rotate(find(begin(list),end(list), 2),find(begin(list),end(list),7) , find(begin(list),end(list),7)+1);

	cout<<"after rotation"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//rotate() move 5 to position of 2
	list=source;
	cout<<"before rotation"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;

	rotate(find(begin(list),end(list), 2),find(begin(list),end(list),5) , find(begin(list),end(list),7)+1);

	cout<<"after rotation"<<endl;
	for_each(begin(list),end(list),[](auto e){cout<<e<<" ";});cout<<endl;



	return 0;
}




