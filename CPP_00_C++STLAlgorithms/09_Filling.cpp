/*
 * 09_FillingCollection.cpp
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
	vector<int> source(10);

	//fill()
	auto v1=source;
	cout<<"fill()"<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;

	fill(begin(v1), end(v1), 1);

	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//fill_n()
	auto v2=source;
	cout<<"fill_n()"<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	int NumberOfElementsTobeFilled=3;

	fill_n(begin(v2), NumberOfElementsTobeFilled, 1);

	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//iota() increment by 1 on seed value
	auto v3=source;
	cout<<"iota()"<<endl;
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;

	iota(begin(v3), end(v3), 5);

	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//generate()
	auto v4=source;
	cout<<"generate()"<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;

	int counter=3;
	generate(begin(v4), end(v4),[&counter](){counter=counter+1;return counter;} );

	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;

	//generate_n()
	auto v5=source;
	cout<<"generate_n()"<<endl;
	for_each(begin(v5),end(v5),[](auto e){cout<<e<<" ";});cout<<endl;

	counter=3;
	NumberOfElementsTobeFilled=5;
	generate_n(begin(v5),NumberOfElementsTobeFilled ,[&counter](){counter=counter+1;return counter;} );

	for_each(begin(v5),end(v5),[](auto e){cout<<e<<" ";});cout<<endl;
	cout<<endl;
	return 0;
}



