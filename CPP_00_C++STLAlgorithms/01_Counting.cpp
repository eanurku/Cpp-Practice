/*
 * 01_Counting.cpp
 *
 *  Created on: Feb 3, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> list{2,1,3,4,5,6,7,3,5,5,9};

	int target=5;

	//old way
	int count1=0;
	for(auto e:list){
		if(e==target){
			count1++;
		}
	}
	cout<<"count of "<<target<<" is ="<<count1<<endl;

	//stl way count()

	auto count2=count(begin(list),end(list),target);

	cout<<"count of "<<target<<" is ="<<count2<<endl;

	//stl count_if()

	auto evenCount=count_if(begin(list), end(list),[](auto e){ return e%2==0;});

	cout<<"even elements count="<<evenCount<<endl;

	//stl all_of(), none_of(), any_of()
	bool allOf=all_of(begin(list), end(list), [](auto e){return e>0;});
	bool neOf=none_of(begin(list), end(list), [](auto e){return e>100;});
	bool anyOf=any_of(begin(list), end(list), [](auto e){return e<1;});

	cout<<"all of="<<allOf<<endl;
	cout<<"none  of="<<neOf<<endl;
	cout<<"any of="<<anyOf<<endl;


	return 0;
}




