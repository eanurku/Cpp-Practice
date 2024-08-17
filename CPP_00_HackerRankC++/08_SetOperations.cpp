/*
 * 08_SetOperations.cpp
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


		set<int> set { };
		int type,value,queriesCount;

		cin>>queriesCount;

		for (int var = 0; var < queriesCount; ++var) {

			cin >>type>>value;
			switch(type){
			case 1:
				//insert

				set.insert(value);
				break;
			case 2:
				//delete
				set.erase(value);
				break;
			case 3:
				//search
				auto iter=set.find(value);
				if(iter!=set.end()){
					cout<<"Yes"<<endl;
				}else{
					cout<<"No"<<endl;
				}
				break;
			}
		}


	return 0;

}



