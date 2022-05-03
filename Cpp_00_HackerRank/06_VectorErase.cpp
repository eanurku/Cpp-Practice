/*
 * 06_VectorErase.cpp
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
	int pos { };
	int startPos, endPos { };
	int num { };
	vector<int> vect { };

	cin>>n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		vect.push_back(num);
	}
	cin>>pos;
	cin>>startPos>>endPos;

	vect.erase(begin(vect)+pos-1);
	vect.erase(begin(vect)+startPos-1,begin(vect)+endPos-1);

	cout<<vect.size()<<endl;
	for (int i = 0; i < vect.size(); i++) {
			cout << vect[i];
			if (i != vect.size() - 1) {
				cout << " ";
			}
	}
	cout<<endl;
	return 0;
}



