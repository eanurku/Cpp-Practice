/*
 * 02_Finding.cpp
 *
 *  Created on: Feb 3, 2022
 *      Author: anura
 */

#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> list{9,8,3,4,5,1,2,6,7,};

	int target=3;
	//old way
	for(int i=0;i<list.size();i++){

		if(list[i]==target){
            cout<<"found at index="<<i<<endl;
            break;
		}
	}

	//stl way find()
	auto result=find(begin(list), end(list), 31);

	if(result!=end(list)){
		cout<<"found target"<<endl;
	}else{
		cout<<"target not found"<<endl;
	}

	//stl find_if()
    auto oddResult=find_if(begin(list),end(list),[](auto e){return e%2!=0;});
    if(oddResult!=end(list)){
    	cout<<"found first odd element ="<<*oddResult<<endl;
    }else{
    	cout<<"odd element not found"<<endl;
    }

	return 0;
}



