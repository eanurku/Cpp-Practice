/*
 * 03_Map.cpp
 *
 *  Created on: Apr 28, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
#include <list>
#include <map>
using namespace std;

ostream& operator<<(ostream &os, map<int, string> m) {
	bool isFirst = true;
	os << "[";
	for (auto e : m) {
		if (isFirst) {
			os << e.first << "=>" << e.second;
			isFirst = false;
		} else {
			os << "," << e.first << "=>" << e.second;
		}
	}
	os << "]";
	return os;
}

int main() {

	map<int, string> numMap { };
	cout << numMap << endl;

	//inserts
	numMap[1] = "one";
	numMap[3] = "three";
	numMap[4] = "four";
	numMap[5] = "five";
	cout << numMap << endl;

	numMap.insert({2,"two"});
	cout<<numMap<<endl;

	//iterating over map
	for(auto e:numMap){
		cout<<e.first<<"=>"<<e.second<<" ";
	}
	cout<<endl;
	//iterating over map c++17 structure bindings
	for(auto [key,value]:numMap){
		cout<<key<<"=>"<<value<<" ";
	}
	cout<<endl;

	//accessing
	cout<<numMap[2]<<endl;
	auto it=numMap.find(2);
	if(it!=numMap.end()){
		cout<<(*it).second<<endl;
	}

	//remove
	numMap.erase(3);
	cout<<numMap<<endl;

	//remove all evens keys pair
	for(auto it=numMap.begin(),last=numMap.end();it!=last;){
		if((*it).first%2==0){
			it=numMap.erase(it);
		}else{
			it++;
		}
	}
	cout<<numMap<<endl;



	return 0;
}

