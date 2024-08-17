/*
 * 05_Accumulate.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: anura
 */




#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include<string>
using namespace std;

int main() {


	vector<int> list{1,2,3,4,5};

	//stl accumulate()
	//sum
	auto sum=accumulate(begin(list),end(list), 0);
	cout<<"sum="<<sum<<endl;

	//product
	auto product=accumulate(begin(list),end(list), 1, [](int total ,int e){return total*e;});
	cout<<"product="<<product<<endl;

	//stl accumulate() with different types
	//concat string and numbers
	auto numberString=accumulate(begin(list),end(list), string{"Numbers are: "}, [](const string& total ,int e){return total+" "+to_string(e);});
	cout<<numberString<<endl;

	//concat strings
	vector<string> words{"one","two","three"};
	auto wordsConcated=accumulate(begin(words), end(words), string{"words are: "}, [](const string& total,string& word){return total+ " "+word;});
	cout<<wordsConcated<<endl;




	return 0;
}
