/*
 * 02_StringsSwapCharacter.cpp
 *
 *  Created on: May 1, 2022
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
#include <unordered_map>

using namespace std;

int main() {
	string a{};
	string b{};
	cin>>a;
	cin>>b;

	cout<<a.size()<<" "<<b.size()<<endl;
	cout<<a+b<<endl;
	iter_swap(begin(a), begin(b));
	cout<<a<<" "<<b<<endl;
	return 0;
}




