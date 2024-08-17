/*
 * 22_VariadicTemplate.cpp
 *
 *  Created on: May 21, 2022
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

void print(){
	cout<<"DONE";
}
template<class T,class... arguments>
void print(T var1,arguments... elements){

	cout<<var1<<" ";
	print(elements...);

}
int main() {
	cout << "!!!Hello World!!!" << endl;

	print(1,2,3,4,5);
	return 0;
}




