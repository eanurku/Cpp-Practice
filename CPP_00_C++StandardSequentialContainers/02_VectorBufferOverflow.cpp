/*
 * 02_VectorBufferOverflow.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<int> nums{};
	//buffer overflow
	//cout<<nums[3]<<endl;//overflow error


	//setting and accessing out of bound element,
	//cause crash or overriding of memeory used by other app
	vector<int> nums1{1,2,3};
	nums1[4]=33;
	cout<<"capacity="<<nums1.capacity()<<endl;
	cout<<"accessing element at index 4 ="<<nums1[4]<<endl;
	return 0;
}



