/*
 * 07_ReadingFile.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file("input.txt");
	string line{};
	vector<string> lines{};

	while(getline(file,line)){
		lines.push_back(line);
	}

	sort(begin(lines),end(lines));

	for(auto const& e:lines){
		cout<<e<<endl;
	}

	return 0;
}



