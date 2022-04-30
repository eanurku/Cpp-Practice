/*
 * 04_UnorderedMap.cpp
 *
 *  Created on: Apr 30, 2022
 *      Author: anurag
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
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	ifstream file("input.txt");
	string line { };
	unordered_map<string, int> map { };

	while (getline(file, line)) {
		std::stringstream linestream(line);
		string word { };
		while (getline(linestream, word, ' ')) {
			map[word]=map[word]+1;
		}
	}

	cout<<map.size()<<endl;
	for(auto [word,count]:map){
		cout<<word<<" "<<count<<endl;
	}

	return 0;
}

