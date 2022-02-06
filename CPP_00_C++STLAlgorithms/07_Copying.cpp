/*
 * 07_Copying.cpp
 *
 *  Created on: Feb 6, 2022
 *      Author: anurag
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {


	vector<int> source{1,2,3,4,5,6,7,8,9,10};

	//operator=
	auto copyList1=source;
	cout<<"after copy by operator="<<endl;
	for_each(begin(source),end(source),[](int e){cout<<e<<" ";});
	cout<<endl;

	//copy()
	vector<int> v1(source.size());
	copy(begin(source), end(source), begin(v1));
	cout<<"after copy() full collection"<<endl;
	for_each(begin(v1), end(v1), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy() for a range
	vector<int> v2(source.size());
	auto positionIterator=find(begin(source),end(source),6);
	copy(begin(source),positionIterator,begin(v2));
	cout<<"after copy() for range"<<endl;
	for_each(begin(v2), end(v2), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy_if()
	vector<int> v3(source.size());
	copy_if(begin(source), end(source), begin(v3), [](auto e){return e%2==0;});
	cout<<"after copy_if() for even numbers"<<endl;
	for_each(begin(v3), end(v3), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy_n
	vector<int> v4(source.size());
	int numberOfElementToBeCopied=3;
	copy_n(begin(source), numberOfElementToBeCopied, begin(v4));
	cout<<"after copy_n() for n elements"<<endl;
	for_each(begin(v4), end(v4), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy() on same collections
	vector<int> v5(source);
	cout<<"before copy() on same collections"<<endl;
	for_each(begin(v5), end(v5), [](auto e){cout<<e<<" ";});
	cout<<endl;
	positionIterator=find(begin(v5),end(v5),3);
	cout<<"position="<<*positionIterator<<endl;
	copy(begin(v5),positionIterator+1,positionIterator+1);
	cout<<"after copy() on same collections"<<endl;
	for_each(begin(v5), end(v5), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy() on same collection with  overlapping source range and target range
	vector<int> v6(source);
	cout<<"before copy() on same collections with  overlapping source range and target range"<<endl;
	for_each(begin(v6), end(v6), [](auto e){cout<<e<<" ";});
	cout<<endl;

	copy(begin(v6),end(v6)-1,begin(v6)+1);
	cout<<"after copy() on same collections with  overlapping source range and target range"<<endl;
	for_each(begin(v6), end(v6), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy() on same collection with  overlapping source range and target range
	vector<int> v7(source);
	cout<<"before copy() on same collections with  overlapping source range and target range"<<endl;
	for_each(begin(v7), end(v7), [](auto e){cout<<e<<" ";});
	cout<<endl;

	auto positionIterator1=find(begin(v7),end(v7),3);
	auto positionIterator2=find(begin(v7),end(v7),2);

	copy(begin(v7),positionIterator1+1,positionIterator2);
	cout<<"after copy() on same collections with  overlapping source range and target range"<<endl;
	for_each(begin(v7), end(v7), [](auto e){cout<<e<<" ";});
	cout<<endl;

	//copy_backward()
	vector<int> v8(source);
	cout<<"before copy_backward()"<<endl;
	for_each(begin(source), end(source), [](auto e){cout<<e<<" ";});
	cout<<endl;
	copy_backward(begin(v8), end(v8), end(source));
	cout<<"after copy_backward()"<<endl;
	for_each(begin(source), end(source), [](auto e){cout<<e<<" ";});
	cout<<endl;











	return 0;


}




