//============================================================================
// Name        : MultiMap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

int main() {

	multimap<int,int> mmap;
	mmap.insert(pair<int,int>(2,23));
	mmap.insert(pair<int,int>(2,23));
	mmap.insert(pair<int,int>(23,23));
	mmap.insert(pair<int,int>(2,23));
	mmap.insert(pair<int,int>(21,23));
	mmap.insert(pair<int,int>(2,23));

	for(pair<int,int> e:mmap){
		cout<<e.first<<" "<<e.second<<endl;
	}
	return 0;
}
