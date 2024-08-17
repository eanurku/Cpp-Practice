/*
 * 04_OperatorOverloading.cpp
 *
 *  Created on: May 2, 2022
 *      Author: anura
 */


#include<bits/stdc++.h>
using namespace std;


class Box{
  private:
  int l{};
  int b{};
  int h{};
  public:
  Box()=default;
  Box(int ll,int bb,int hh):l(ll),b(bb),h(hh){
  }
  Box(Box& B):l(B.l),b(B.b),h(B.h){

  }
  int getLength(){
      return l;
  }
    int getBreadth(){
      return b;
  }
    int getHeight(){
      return h;
  }
  long long CalculateVolume(){
      return static_cast<long long>(l) * b * h;
  }
 bool operator<(Box other){
	  if(this->l==other.l){
		  if(this->b==other.b){
			  return this->h<other.h;
		  }else{
			  return this->b<other.b;
		  }
	  }else{
		  return this->l<other.l;
	  }

  }
 friend ostream& operator<<(ostream& os,Box box){
 	os<<box.getLength()<<" "<<box.getBreadth()<<" "<<box.getHeight();
 	return os;
 }

};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}



