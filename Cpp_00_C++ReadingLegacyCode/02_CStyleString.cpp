/*
 * 02_CStyleString.cpp
 *
 *  Created on: Mar 19, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cstring>
using namespace std;

int main() {
	cout<<"c style strings"<<endl;
	char* str1="hello";
	cout<<"str1 = "<<str1<<endl;
	cout<<"str1 length = "<<strlen(str1)<<endl;

	char str2[]={'a','n','u'};
	cout<<"str2 = "<<str2<<endl;//print untill find an null terminator

	char str3[]={'a','n','u','\0'};//null terminated char array
	cout<<"str3 = "<<str3<<endl;

	char* str4=new char[strlen(str1+strlen(str3))];
	strcpy(str4,str1);
	cout<<"str4 after copy = "<<str4<<endl;
	strcat(str4,str3);
	cout<<"str4 after concat = "<<str4<<endl;

	//c style array to std array conversion
	char* str10="gonu";
	std::string stdStr1(str10);
	cout<<"std str1 = "<<stdStr1<<endl;

	//c_str() function to convert to c style array
	std::string stdStr2("monu");
	const char*  str11=stdStr2.c_str();
	cout<<"str11 = "<<str11<<endl;

	char* str12=new char[strlen(stdStr2.c_str())];
	strcpy(str12,stdStr2.c_str());
	cout<<"str12 = "<<str12<<endl;





	return 0;
}



