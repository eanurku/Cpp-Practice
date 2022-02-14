/*
 * 04_lambdaCaptureByReference.cpp
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
	vector<int> list { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    //capture by reference
     int xValue=100;
     int yValue=200;
     cout<<"capture by reference"<<endl;
     for_each(begin(list),end(list),[&xValue,&yValue](auto e){

    	 cout<<e<<" "<<xValue<<" "<<yValue<<endl;
    	 xValue++;
    	 yValue++;

     });cout<<endl;

     //capture everything by reference using &
      int x=-100;
      int y=-200;
      cout<<"capture everything by reference using &"<<endl;
      for_each(begin(list),end(list),[&](auto e){

     	 cout<<e<<" "<<x<<" "<<y<<endl;
     	 x++;
     	 y++;

      });cout<<endl;

      //capture by value and reference both
      x=500;
      y=500;
      cout<<"capture by value and reference both"<<endl;
      cout<<"before x="<<x<<",y="<<y<<endl;

      for_each(begin(list),end(list),[x,&y](auto e) mutable {

     	 cout<<e<<" "<<x<<" "<<y<<endl;
     	 x++;
     	 y++;

      });
      cout<<"after x="<<x<<",y="<<y<<endl;
      cout<<endl;

      //capture everything by value using = and reference both
      x=500;
      y=500;
      cout<<"capture everything by value using = and reference both"<<endl;
      cout<<"before x="<<x<<",y="<<y<<endl;

      for_each(begin(list),end(list),[=,&y](auto e) mutable {

     	 cout<<e<<" "<<x<<" "<<y<<endl;
     	 x++;
     	 y++;

      });
      cout<<"after x="<<x<<",y="<<y<<endl;
      cout<<endl;

      //capture everything by reference using & and value both
      x=500;
      y=500;
      cout<<"capture everything by reference using & and value both"<<endl;
      cout<<"before x="<<x<<",y="<<y<<endl;

      for_each(begin(list),end(list),[&,x](auto e) mutable {

     	 cout<<e<<" "<<x<<" "<<y<<endl;
     	 x++;
     	 y++;

      });
      cout<<"after x="<<x<<",y="<<y<<endl;

	return 0;
}
