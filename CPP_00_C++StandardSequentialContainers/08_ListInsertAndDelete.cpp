/*
 * 08_ListInsertAndDelete.cpp
 *
 *  Created on: Apr 26, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <list>
using namespace std;

int main() {

	//push_back(),push_front()
	list<int> list{10,20,30,40,50,60};

	list.push_back(100);
	list.push_front(0);

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;

	//insert(post,element)
	list.insert(list.begin(), 11);

	auto posIterator=list.begin();
	std::advance(posIterator, 3);

	list.insert(posIterator, 200);

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;


	//pop_back(),pop_front()
	list.pop_back();
	list.pop_front();

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;
	list.erase(remove_if(begin(list), end(list), [](auto e){return e%2==0;}),end(list));

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;
	cout<<"list size="<<list.size()<<endl;
	return 0;
}


