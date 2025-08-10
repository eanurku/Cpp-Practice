/*
 * 05_LambdaReturnType.cpp
 *
 *  Created on: Feb 14, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	vector<int> list{1,2,3,4,5};

	auto sum=accumulate(begin(list), end(list), 0,	[](auto total,auto e) -> double {
		if(e%2==0){
			cout<<"sum="<<total<<endl;
			return total+2;
		}
		else{
			cout<<"sum="<<total<<endl;
			return total+0;
		}

	});

	cout<<"sum="<<sum<<endl;

	return 0;
}



