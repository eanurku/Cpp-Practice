/*
 * 01_VectorOperations.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: anura
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Person{
public:
	Person()=default;
	Person(int id,string name):m_id(id),m_name(name)
	{}
	int getId() const{
		return m_id;
	}
	string getName() const{
		return m_name;
	}
private:
	int m_id{};
	string m_name{};

};
int main() {
	//initialization
	vector<string> names{10,"monu"};
	for(auto e:names){
		cout<<e<<" ";
	}
	cout<<endl;

	//initialization with custom objects
	vector<Person> persons{
		{123,"gonu"},
		{124,"monu"},
		{125,"sonu"}
	};

	for(auto p:persons){
		cout<<"Person[id="<<p.getId()<<",name="<<p.getName()<<"] ";
	}
	cout<<endl;

	//insert
	persons.push_back(Person{12,"nonu"});

	for(auto p:persons){
		cout<<"Person[id="<<p.getId()<<",name="<<p.getName()<<"] ";
	}
	cout<<endl;

	//reserve()
	cout<<"persons size="<<persons.size()<<",capacity="<<persons.capacity()<<endl;
	persons.reserve(20);
	cout<<"persons size="<<persons.size()<<",capacity="<<persons.capacity()<<endl;

	//at()
	cout<<persons[3].getId()<<"  "<<persons.at(3).getId()<<endl;




	return 0;
}



