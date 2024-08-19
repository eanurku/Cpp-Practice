//============================================================================
// Name        : Multiset.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>

using namespace std;

int main() {


	multiset<int> mset;
	mset.insert(12);
	mset.insert(1);
	mset.insert(22);
	mset.insert(3);
	mset.insert(11);
	mset.insert(3);
	mset.insert(12);
	for(int e:mset){

		cout<<e<<" ";
	}

	return 0;
}
