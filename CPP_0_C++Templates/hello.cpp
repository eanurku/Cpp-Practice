

#include<iostream>
#include "Account.h"
using namespace std;


template <class T>
T maxFunc(T first,T second){
	return first>second?first:second;
}

int main(){

	cout<<maxFunc<string>("anu", "gonu")<<endl;

	return 0;

}
