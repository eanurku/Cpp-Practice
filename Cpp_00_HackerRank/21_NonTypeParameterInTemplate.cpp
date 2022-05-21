/*
 * 21_NonTypeParameterInTemplate.cpp
 *
 *  Created on: May 21, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
#include <list>
#include <map>
#include <unordered_map>
#include <sstream>
#include <iomanip>

using namespace std;
template <class T ,int max> int findMin(int arr[],int n){

	int m=max;
	for (int i = 0; i < n; ++i) {
		if(arr[i]<m){
			m=arr[i];
		}
	}
	return m;
}
int main() {

	int array[]={1,2,3,4,5,6};
	int n=sizeof(array)/sizeof(array[0]);

	//non-type argument passed to template function must be constant
	int min=findMin<int,100>(array, n);
	cout<<min;

	return 0;
}



