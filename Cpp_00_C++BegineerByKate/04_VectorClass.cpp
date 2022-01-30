/*
 * 04_VectorClass.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
using std::vector;
using std::cout;


int main()
{
    vector<int> nums;
    for (int i = 1;i<=10;i++) {
        nums.push_back(i);
    }

    cout << nums.size() << "\n";

    //for each loop
    for (int num:nums) {
        cout << num << " ";
    }
    cout << "\n";

    //iterator based for loop
    for (auto iterator = begin(nums);iterator!=end(nums);iterator++) {
        cout << *iterator<<" ";
    }


}


