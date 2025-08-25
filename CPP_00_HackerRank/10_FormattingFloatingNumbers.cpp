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

		cout<<setw(0)<<nouppercase<<showbase<<hex<<(long long)A<<"\n";
		cout<<setfill('_')<<right<<showpos<<fixed<<setw(15)<<setprecision(2)<<B<<"\n";
		cout<<noshowbase<<uppercase<<scientific<<setprecision(9)<<C<<"\n";
	}
}
/*test case 1
input:
1
100.345 2006.008 2331.41592653498

output:
0x64
_______+2006.01
2.331415927E+03
*/

