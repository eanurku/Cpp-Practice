/*
 * 04_ComparingCollections.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	vector<int> list1{5,4,3,2,11,6,33,22,11};
	vector<int> list2{5,4,3,2,0,6,33,22,11};

	//old way
    bool same=list1.size()==list2.size();
    for(int i=0;i<list1.size() && same;i++){
    	if(list1[i]!=list2[i]){
    		same=false;
    	}
    }
    cout<<"list is equal ="<<(same?"true":"false")<<endl;

    //stl equal()
     same=equal(begin(list1), end(list2),begin(list2),end(list2));
     cout<<"list is equal ="<<(same?"true":"false")<<endl;

     //stl mismatch()
     auto firstMismatch=mismatch(begin(list1), end(list1), begin(list2), end(list2));

     cout<<"first mismatch in list1 at "<<*firstMismatch.first<<endl;
     cout<<"first mismatch in list2 at "<<*firstMismatch.second<<endl;

	return 0;
}



