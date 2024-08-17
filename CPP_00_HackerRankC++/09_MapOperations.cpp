/*
 * 09_MapOperations.cpp
 *
 *  Created on: May 3, 2022
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
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

	int type, marks, queriesCount, total;
	string name;
	map<string, int> mapData { };

	cin >> queriesCount;

	for (int i = 0; i < queriesCount; i++) {
		cin >> type;
		switch (type) {
		case 1:
			cin >> name >> marks;
			mapData[name] += marks;
			break;
		case 2:
			cin >> name;
			mapData.erase(name);
			break;
		case 3:
			cin >> name;
			auto iter = mapData.find(name);
			if (iter != mapData.end()) {
				cout << (*iter).second << endl;
			} else {
				cout << 0 << endl;
			}

			break;
		}

	}

	return 0;

}




