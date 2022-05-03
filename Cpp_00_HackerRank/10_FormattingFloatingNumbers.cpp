/*
 * 10_FormattingFloatingNumbers.cpp
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
	int T;
	cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;

	while (T--) {
		double A;cin >> A;
		double B;cin >> B;
		double C;cin >> C;

		cout << fixed << std::nouppercase << setw(0) << std::showbase<< std::hex << (long long) (A) << endl;

		cout.fill('_');
		cout << fixed << setprecision(2) << setw(15) << std::right<< std::showpos << B << endl;

		cout << std::noshowpos << std::scientific << setprecision(9)<< std::uppercase << C << endl;
	}
}
//test case 1
//1
//208414854666.958526611328 2313911.864716848824 433096839331.672363281250
//test case 2

