/*
 * 03_StringStream.cpp
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
#include <sstream>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function

	vector<int> v{};

	stringstream ss(str);
	string item{};
	while(getline(ss,item,',')){
		v.push_back(stoi(item));
	}

	return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
	return 0;
}

