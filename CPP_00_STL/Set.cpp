//============================================================================
// Name        : Set.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>
using namespace std;

int main() {

//set ,unique elements ,increasing order by default
	set<int> set1;
	set1.insert(7);
	set1.insert(1);
	set1.insert(56);
	set1.insert(14);
	set1.insert(3);
	set1.insert(3);
	set1.insert(3);

	for(int s:set1){
		cout<<s<<" ";
	}
	cout<<endl;
//

	set<int,greater<int>> set2;
	set2.insert(7);
	set2.insert(1);
	set2.insert(56);
	set2.insert(14);
	set2.insert(3);
	set2.insert(3);
	set2.insert(3);

	for(int s:set2){
		cout<<s<<" ";
	}

	return 0;
}
