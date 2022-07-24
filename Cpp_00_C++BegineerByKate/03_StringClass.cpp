/*
 * 03_StringClass.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */



#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    //string str;
    //cin >> str;
    //cout << str;

    string str;
    getline(cin, str);
    cout << str<<"\n";

    //member functions in string
    cout << str.substr(3, 6)<<"\n";
    cout << str.length()<<"\n";



}

