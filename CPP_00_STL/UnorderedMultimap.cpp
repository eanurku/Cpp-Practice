//============================================================================
// Name        : UnorderedMultimap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	unordered_multimap<int,int> ummap;
	ummap.insert(pair<int,int>(2,23));
	ummap.insert(pair<int,int>(2,23));
	ummap.insert(pair<int,int>(23,23));
	ummap.insert(pair<int,int>(2,23));
	ummap.insert(pair<int,int>(21,23));
	ummap.insert(pair<int,int>(2,23));

	for(pair<int,int> e:ummap){
		cout<<e.first<<" "<<e.second<<endl;
	}
	return 0;
}
