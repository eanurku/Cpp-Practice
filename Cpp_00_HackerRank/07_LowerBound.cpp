/*
 * 07_LowerBound.cpp
 *
 *  Created on: May 3, 2022
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

	int n { };
	int num { };
	vector<int> vect { };

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		vect.push_back(num);
	}

	int queriesCount{};
	vector<int> queries{};

	cin>>queriesCount;
	for (int i = 0; i < queriesCount; i++) {
		cin >> num;
		queries.push_back(num);
	}

	for(auto e:queries){
		auto pos=lower_bound(begin(vect), end(vect), e);
		if(*pos==e){
			cout<<"Yes "<<pos-vect.begin()+1<<endl;
		}else{
			cout<<"No "<<pos-vect.begin()+1<<endl;
		}

	}

	return 0;

}



