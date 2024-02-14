/*
 * 24_SlidingWindowProblem.cpp
 *
 *  Created on: Sep 17, 2022
 *      Author: anura
 */

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void printKMax(int arr[], int n, int k) {
    //Write your code here.
    std::deque<int> DQ;

    for (int i = 0; i < k; i++) {
        if (DQ.empty())
            DQ.push_back(i);
        else {
            while (!DQ.empty() && arr[DQ.back()] <= arr[i]) {
                DQ.pop_back();
            }
            DQ.push_back(i);
        }
    }
    for (int i = k; i < n; ++i) {
        cout << arr[DQ.front()] << " ";
        //remove from front if they are out of current window
        while (!DQ.empty() &&  DQ.front() < i - k + 1) {
            DQ.pop_front();
        }

        //insert current element such that all previous are bigger only else remove smallers.
        if (DQ.empty())
            DQ.push_back(i);
        else {
            while (!DQ.empty() &&  arr[DQ.back()] <= arr[i]) {
                DQ.pop_back();
            }
            DQ.push_back(i);
        }


    }

        cout << arr[DQ.front()]<<" ";

    cout << "\n";
}



int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}



