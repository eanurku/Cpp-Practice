/*
 * 14_Preprocessor.cpp
 *
 *  Created on: May 5, 2022
 *      Author: anura
 */
#define io(v) cin>>v
#define toStr(x) #x
#define INF INT_MAX
#define foreach(v, i) for(int i=0;i<v.size();i++)
#define FUNCTION(m,sign)  int m(int& result,int& val){ result= result sign val? result:val; }


#include <iostream>
#include <vector>
using namespace std;



#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
/*
input:
5
32 332 -23 -154 65
output:
Result = 486

 */


