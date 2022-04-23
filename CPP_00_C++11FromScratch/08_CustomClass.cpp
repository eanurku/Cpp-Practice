/*
 * 08_CustomClass.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Rectangle{

public:
	Rectangle()=default;
    Rectangle(double width,double length):width_(width),length_(length){

	}
	double getWidth() const{
		return width_;
	}
	double getlength() const {
		return length_;
	}
	void scale(int scaleFactor){
		width_*=scaleFactor;
		length_*=scaleFactor;
	}
private:
	double width_;
	double length_;

};

 void print(Rectangle const& r){
	 cout<<"Reactangle:width="<<r.getWidth()<<",length="<<r.getlength()<<endl;
 }
int main() {
	cout << "custom class !!!" << endl; // prints !!!Hello World!!!

	//default rectangle
	Rectangle rectangle1{};
	cout<<"rectangle width="<<rectangle1.getWidth()<<endl;
	cout<<"rectangle length="<<rectangle1.getlength()<<endl;
	cout<<endl;

	//Rectangle initialized
	Rectangle rectangle2{10,20};
	cout<<"rectangle width="<<rectangle2.getWidth()<<endl;
	cout<<"rectangle length="<<rectangle2.getlength()<<endl;
	cout<<endl;

	cout<<"after scaling"<<endl;
	rectangle2.scale(5);
	print(rectangle2);
	return 0;
}




