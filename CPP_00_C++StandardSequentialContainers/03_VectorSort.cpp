/*
 * 03_VectorSort.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<string> v{"monday","gon","craks","itsnever"};
	//sort based on alphabetical order
	cout<<"before sorting"<<endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;


	sort(begin(v),end(v));

	cout<<"after sorting"<<endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;

	//sort based on length
	sort(begin(v),end(v),[](string a,string b){
		return a.length()<b.length();
	});
	cout<<"sorting by length"<<endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	return 0;
}




