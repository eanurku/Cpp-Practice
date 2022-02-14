/*
 * 03_LambdaCapture.cpp
 *
 *  Created on: Feb 14, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {

	vector<int> list{1,2,3,4,5,6,7,8,9};

    //empty capture
     auto evenCount=count_if(begin(list),end(list), [](auto e){return e%2==0;});
     cout<<"even count="<<evenCount<<endl;
     cout<<endl;

    //capture by value
     int xValue=10;
     int yValue=20;
     cout<<""<<endl;
     for_each(begin(list),end(list),[xValue,yValue](auto e){cout<<e<<" "<<xValue<<" "<<yValue<<endl;});cout<<endl;

     //capture everything by value using =
     int x=-1;
     int y=-2;
     cout<<"capture everything by value using ="<<endl;
     for_each(begin(list),end(list),[=](auto e){cout<<e<<" "<<x<<" "<<y<<endl;});cout<<endl;

     //capture by alias expression
     cout<<"capture by alias expression"<<endl;
     for_each(begin(list),end(list),[p=100] (auto e){
    	 cout<<e<<" "<<p<<" "<<endl;
     });cout<<endl;

     //capture by alias expression
     int a=100;
     cout<<"capture by alias expression"<<endl;
     for_each(begin(list),end(list),[p=a+100] (auto e){
    	 cout<<e<<" "<<p<<" "<<endl;
     });cout<<endl;

     //mutable
     cout<<"mutable"<<endl;
     for_each(begin(list),end(list),[p=300] (auto e) mutable {
    	 cout<<e<<" "<<p<<" "<<endl;
    	 p++;
     });cout<<endl;

     //mutable
     int num=333;
     cout<<"mutable "<<endl;
     cout<<"before num="<<num<<endl;
     for_each(begin(list),end(list),[num] (auto e) mutable {
    	 cout<<e<<" "<<num<<" "<<endl;
    	 num++;
     });
     cout<<"after num="<<num<<endl;
     cout<<endl;

	return 0;
}



