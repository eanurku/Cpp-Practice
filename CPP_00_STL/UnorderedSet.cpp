//============================================================================
// Name        : Unordered_set.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {

	unordered_set<int> uset;
	uset.insert(12);
	uset.insert(1);
	uset.insert(12);
	uset.insert(44);
	uset.insert(13);
	uset.insert(13);


	for(int e:uset){
		cout<<e<<" ";
	}

//find duplicate
//	int array[]={1,2,3,4,5,6,7,2,3,1,4,2};
//	int size=sizeof(array)/sizeof(array[0]);
//	int i;
//
//
//	unordered_set<int> uniqueset;
//	unordered_set<int> duplicateSet;
//
//	for(i=0;i<size;i++){
//
//		if(uniqueset.find(array[i]) ==uniqueset.end()){
//			uniqueset.insert(array[i]);
//
//		}else{
//			duplicateSet.insert(array[i]);
//		}
//	}
//	for(int e:uniqueset){
//		cout<<e<<" ";
//	}
//	cout<<endl;
//	for(int e:duplicateSet){
//		cout<<e<<" ";
//	}

	return 0;
}
