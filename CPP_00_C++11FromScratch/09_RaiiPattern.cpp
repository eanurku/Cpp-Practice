/*
 * 09_RaiiPattern.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Resource{

public:
	Resource(){
		cout<<"Resource is allocatted"<<endl;
	}
	~Resource(){
		cout<<"Resource is released..."<<endl;
	}
	void use(){
		cout<<"Resource is getting used..."<<endl;
	}
private:
//raw variables
};


class MyClass{
public:
	MyClass()=default;
	void use(){
		resA.use();
		resB.use();
		resC.use();
	}
	~MyClass(){
		cout<<"Myclass destructed..."<<endl;
	}

private:
	Resource resA{};
	Resource resB{};
	Resource resC{};
};

int main() {
	Resource res{};
	res.use();


	MyClass m{};
	m.use();

	return 0;
}



