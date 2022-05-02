/*
 * 05_VectorSorting.cpp
 *
 *  Created on: May 2, 2022
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

int main() {
	int n{};
	cin>>n;
	int num{};
	vector<int> vect{};
    for(int i=0;i<n;i++){
        cin>>num;
        vect.push_back(num);
    }
    sort(begin(vect),end(vect));
    for (int i = 0; i < vect.size(); i++) {
			cout << vect[i];
			if (i != vect.size() - 1) {
				cout << " ";
			}
		}
	return 0;
}



