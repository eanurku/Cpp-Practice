/*
 * 05_VectorFind.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
bool isEqualNoCase(string s1,string s2){

	return equal(begin(s1), end(s1),begin(s2), end(s2), [](auto a,auto b){
		return tolower(a)==tolower(b);
	});
}
int main() {
	cout<<"find methods"<<endl;
	//find
	vector<string> names{"anu","chorus","jon","just","friday"};
	string search;
	getline(cin,search);
	auto findIndex=find(begin(names),end(names), search);
	if(findIndex != end(names)){
		cout<<"found the search element at pos="<<(findIndex-begin(names))+1<<endl;
	}else{
		cout<<"search element not found"<<endl;
	}

	//find_if
	//search with case insensitive way
	getline(cin,search);
	findIndex=find_if(begin(names), end(names), [&search](auto element){
		return isEqualNoCase(search,element);
	});
	if(findIndex != end(names)){
		cout<<"found the search element at pos="<<(findIndex-begin(names))+1<<endl;
	}else{
		cout<<"search element not found"<<endl;
	}
	return 0;
}




