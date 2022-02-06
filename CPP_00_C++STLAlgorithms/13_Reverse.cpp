/*
 * 13_Reverse.cpp
 *
 *  Created on: Feb 6, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {


	//reverse()
	string sentence="hi i am good";
	cout<<sentence<<endl;
	reverse(begin(sentence), end(sentence));
    cout<<sentence<<endl;
    cout<<endl;

    //reverse_copy()
    string sentence1="i am good";
    string revSentence1(sentence1.size(),' ');
    cout<<sentence1<<endl;
    reverse_copy(begin(sentence1), end(sentence1), begin(revSentence1));
    cout<<revSentence1<<endl;
    cout<<endl;


	return 0;
}


