/*
 * 05_Algorithms.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> list;
	int size;
	int value;
	cout << "enter size of list\n";
	cin >> size;
	cout << "enter numbers of list\n";

	for (int i = 1;i<=size;i++) {
		cin >> value;
		list.push_back(value);
	}

	sort(begin(list),end(list));

	//print list
	for (auto item:list) {
		cout << item << " ";
	}

}


