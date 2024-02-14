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
#include<string>

using namespace std;
int main(){

	vector<int> list;

	for(int i=10;i>=1;i--){
		list.push_back(i);
	}
	cout<<list.size()<<"\n";

	cout<<"before sorting:";
	for(int num:list){
		cout<<num<<" ";
	}
	cout<<"\n";
	sort(begin(list), end(list));

	cout<<"after sorting:";
	for(auto i=begin(list);i!=end(list);i++){
		cout<<*i<<" ";
	}
	return 0;

}
