/*
 * 06_Vector.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {


	//initialization of vectors
	cout << "vector initialization" << endl;
	vector<int> numbers1{1,2,3,4,5};
	vector<int> numbers2(3);

	for(auto e:numbers1){
		cout<<e<<" ";
	}
	cout<<endl;

	for(auto e:numbers2){
		cout<<e<<" ";
	}
	cout<<endl;
	cout<<endl;

	//vector iteration
	cout << "vector iteration" << endl;
	vector<int> nums{12,12,12,12,12,12,12};

	//Element Copy
	for(auto e:nums){
		cout<<e<<" ";
		e=20;//copy value changes ,not original
	}
	cout<<endl;
	//No Copy
	for(auto& e:nums){
		cout<<e<<" ";
		e=30;//changes original
	}
	cout<<endl;

	//No Copy and Read only Access
	for(auto const& e:nums){
		cout<<e<<" ";
		//e=40;//read only reference error
	}
	cout<<endl;
	cout<<endl;

	//vector operations
	cout << "vector operations" << endl;
	nums.push_back(100);
	nums.push_back(200);
	for(auto const& e:nums){
		cout<<e<<" ";
	}
	cout<<endl;
	cout<<"vector nums size="<<nums.size()<<endl;
	cout<<"vector is empty="<<nums.empty()<<endl;
	nums.resize(20);
	for(auto const& e:nums){
		cout<<e<<" ";
	}
	cout<<endl;

	nums.clear();
	cout<<"vector nums size="<<nums.size()<<endl;
	cout<<"vector is empty="<<nums.empty()<<endl;

	vector<string> names{};
	names.push_back("monu");
	names.push_back("gonu");
	names.push_back("sonu");
	names.push_back("konu");
	sort(begin(names),end(names));
	for(auto const& e:names){
		cout<<e<<" ";
	}
	cout<<endl;









	return 0;
}


