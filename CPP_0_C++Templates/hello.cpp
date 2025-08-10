

#include<iostream>
#include "Account.h"
#define fun(x) #x

using namespace std;


template <class T>
T maxFunc(T first,T second){
	return first>second?first:second;
}

int main(){

	//cout<<maxFunc<string>("anu", "gonu")<<endl;

	Account *first=new Account(10);
	cout<<(*first).getReport();
	//cout<<fun(rdwdew);
	return 0;

}
