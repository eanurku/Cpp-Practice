/*
 * 05_TemplateClass.cpp
 *
 *  Created on: Jan 28, 2022
 *      Author: anura
 */
#include "person.h"
#include <iostream>
using namespace std;

template<class T>
class Accum{
private:
	T total;
public:
	Accum(T start):total(start){};
	T accum(T value){
		total=total+value;
		return total;
	};
	T getTotal(){return total;}

};

int main() {

	Accum<int> sum(0);

	cout<<sum.accum(10)<<endl;
	cout<<sum.accum(20)<<endl;
	cout<<sum.accum(30)<<endl;
	cout<<sum.accum(40)<<endl<<endl;;

	Accum<float> sum2(0);
	cout<<sum2.accum(10.5)<<endl;
	cout<<sum2.accum(20)<<endl;
	cout<<sum2.accum(30.4)<<endl;
	cout<<sum2.accum(40)<<endl<<endl;

	Accum<string> stringSum("");
	cout<<stringSum.accum("monu ")<<endl;
	cout<<stringSum.accum("gonu ")<<endl;
	cout<<stringSum.accum("sonu ")<<endl;
	cout<<stringSum.accum("conu ")<<endl<<endl;

//accum function uses + operator to add item which is not defined in person so throws below error
//ERROR:no match for 'operator+' (operand types are 'Person' and 'Person')
//	Accum<Person> objectSum(Person("",""));
//	objectSum.accum(Person("abc","xyz"));


	return 0;
}



