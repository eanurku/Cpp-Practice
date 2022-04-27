/*
 * 01_Set.cpp
 *
 *  Created on: Apr 27, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
using namespace std;

ostream& operator<<(ostream& os,set<string> aSet){

	os<<"[";
	for(auto const& e:aSet){
		os<<e<<" ";
	}
	os<<"]";
	return os;
}
int main() {
	//initialized
	set<string> names{"fonu","yonu","conu","ee"};
	cout<<names<<endl;

	//insert
	names.insert("gonu");
	cout<<names<<endl;

	//erase
	names.erase("ee");
	cout<<names<<endl;

	//find
	auto posIterator=names.find("gonu");
	if(posIterator!=names.end()){
		cout<<"found at pos="<<*posIterator<<endl;
	}else{
		cout<<"not found"<<endl;
	}
	return 0;
}



