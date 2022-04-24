/*
 * 04_VectorInsertAndDelete.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	cout << "insert ops" << endl;

	//insert(pos,element)
	vector<int> v { };

	v.insert(begin(v), 10);
	v.insert(begin(v) + 1, 11);
	v.insert(begin(v) + 2, 12);

	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;

	//insert(pos,count,element)

	v.insert(begin(v), 5, 1);

	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;

	//insert(pos,firstIterator,endIterator)

	vector<int> source { 100, 200 };
	v.insert(begin(v) + 2, begin(source), end(source));

	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;

	//insert
	v.insert(begin(v), { 0, 0 });
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;
	cout << endl;

	//Delete element remove()

	auto lastIndex = remove(begin(v), end(v), 1);
	cout << "after remove" << endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;

	v.erase(lastIndex, end(v));

	cout << "after erase" << endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;

	//Delete element remove_if()
	//remove odd element
	v.erase(remove_if(begin(v), end(v), [](auto element) {
		return element % 2 == 0;
	}) ,end(v));

	cout<<"remove even element"<<endl;
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout << "v vector size=" << v.size() << endl;
	return 0;
}

