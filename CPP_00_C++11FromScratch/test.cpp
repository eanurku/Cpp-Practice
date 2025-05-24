//============================================================================
// Name        : Test.cpp
// Author      : anurag
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {

	ifstream file{"input.txt"};
	vector<string> lines;
	string line;

	while(getline(file, line)){

		lines.push_back(line);
	}
	sort(begin(lines),end(lines));

	for(auto &line:lines){
		cout<<line<<endl;

	}

	return EXIT_SUCCESS;
}
