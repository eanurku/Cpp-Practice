/*
 * 08_Removing.cpp
 *
 *  Created on: Feb 6, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	vector<int> source{1,2,3,4,5,6,7,8,9,10,3,4,5};
	auto v1=source;

	//remove() :remove all occurence of a element but do not shrink vector to new size
	//erase() must be used after remove() to shrink vector to new size
	cout<<"before v1 size="<<v1.size()<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});
	cout<<endl;
    int eleemntToBeRemoved=3;
	auto newEnd=remove(begin(v1), end(v1), eleemntToBeRemoved);
	int logicalSize=newEnd-begin(v1);
	cout<<"logicalSize="<<logicalSize<<endl;

	v1.erase(newEnd,end(v1));//shrink vector to actual elements size.

	cout<<"v1 size="<<v1.size()<<endl;
	for_each(begin(v1),end(v1),[](auto e){cout<<e<<" ";});	cout<<endl;
	cout<<endl;


	//remove_if()
	vector<int> v2{1,2,3,4,5,6,7,8,9,10};
	cout<<"before remove_if()"<<endl;
	cout<<"v2 size="<<v2.size()<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;

	v2.erase(remove_if(begin(v2), end(v2),[](auto e){return e%2!=0;}),end(v2));

	cout<<"after remove_if()"<<endl;
	cout<<"v2 size="<<v2.size()<<endl;
	for_each(begin(v2),end(v2),[](auto e){cout<<e<<" ";});cout<<endl;

	cout<<endl;

	//remove_copy() original collection unchanged
	auto v3=source;
	vector<int> v3Copy(v3.size());
	cout<<"before remove_copy()"<<endl;
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v3Copy),end(v3Copy),[](auto e){cout<<e<<" ";});cout<<endl;

	remove_copy(begin(v3), end(v3), begin(v3Copy), 3);
	cout<<"after remove_copy()"<<endl;
	for_each(begin(v3),end(v3),[](auto e){cout<<e<<" ";});cout<<endl;
	for_each(begin(v3Copy),end(v3Copy),[](auto e){cout<<e<<" ";});cout<<endl;

	cout<<endl;

	//erase() remove and shrink vector to new size

	auto v4=source;
	cout<<"before erase()"<<endl;
	cout<<"v4 size="<<v4.size()<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;
	v4.erase(begin(v4),begin(v4)+4);//erase first 4 elements

	cout<<"after erase()"<<endl;
	cout<<"v4 size="<<v4.size()<<endl;
	for_each(begin(v4),end(v4),[](auto e){cout<<e<<" ";});cout<<endl;



	return 0;
}
