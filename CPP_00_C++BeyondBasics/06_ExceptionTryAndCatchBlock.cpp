/*
 * 06_ExceptionTryAndCatchBlock.cpp
 *
 *  Created on: Mar 8, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	vector<int> source(100);

	try{
		int ref=source.at(200);
	}
	catch(out_of_range& ex){
		cout<<"message about exception is::"<<ex.what()<<endl;
	}
	catch(exception& ex){
		cout<<ex.what();
	}
	return 0;
}




