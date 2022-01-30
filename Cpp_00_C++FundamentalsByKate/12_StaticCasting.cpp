/*
 * 12_StaticCasting.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include "twitter.h"
#include "person.h"

using namespace std;

int main() {

	Twitter t1("monu","kum","#monukr");
	Person& p1Ref=t1;
	Person* p1Pointer=&t1;

	cout<<p1Ref.getName()<<" "<<p1Pointer->getName()<<endl;

	//Twitter& t2Ref=p1Ref;//ERROR: p1 is person type which is trying to be assigned to Twitter type.
	//Twitter* t2Pointer1=p1Pointer;//ERROR : cannot convert 'Person' to 'Twitter*' in initialization
	//Twitter* t2Pointer2=&p1Ref;//ERROR

	//old C style type casting
	Twitter& t3Ref=(Twitter&)p1Ref;
	Twitter* t3Pointer1=(Twitter*)p1Pointer;
	Twitter* t3pointer2=(Twitter*)&p1Ref;

	cout<<t3Ref.getName()<<" "<<t3Pointer1->getName()<<" "<<t3pointer2->getName()<<endl;

	//static_cast does casting validation at compile time

	Twitter& t4Ref=static_cast<Twitter&>(p1Ref);
	Twitter* t4Pointer1=static_cast<Twitter*>(p1Pointer);
	Twitter* t4pointer2=static_cast<Twitter*>(&p1Ref);
	cout<<t4Ref.getName()<<" "<<t4Pointer1->getName()<<" "<<t4pointer2->getName()<<endl;

	int i=10;
	Twitter* t5=(Twitter*)&i;//func call on t5 causes RUNTIME_ERROR :old c style type casting not evaluated at compile time,so this line throws error at run time
	cout<<t5->getName()<<endl;//RUNTIME ERROR
	//Twitter* t6=static_cast<Twitter*>(&i);//COMPILER ERROR:static_cast evaluate at compile time

	cout<<"Successfull!!!"<<endl;





	return 0;
}



