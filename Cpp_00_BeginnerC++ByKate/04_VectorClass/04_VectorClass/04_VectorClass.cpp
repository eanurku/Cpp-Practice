// 04_VectorClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

