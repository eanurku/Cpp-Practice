/*
 * 02_SetOfCustomObjects.cpp
 *
 *  Created on: Apr 27, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
using namespace std;

class Point{
public:
	Point()=default;
	Point(double x,double y):m_x(x),m_y(y){
	}
	double getX() const {
		return m_x;
	}
	double getY() const{
		return m_y;
	}
	double getLength() const{
		return std::hypot(m_x, m_y);
	}

private:
	double m_x{};
	double m_y{};
};

int operator<(Point const& a,Point const& b){
	return a.getLength()<b.getLength();
}
ostream& operator<<(ostream& os,set<Point> aSet){

	os<<"[";
	for(auto const& e:aSet){
		os<<"("<<e.getX()<<","<<e.getY()<<")"<<" ";
	}
	os<<"]";
	return os;
}

int main() {

	set<Point> points{{12,13},{2,5},{4,7}};
	cout<<points<<endl;

	return 0;
}



