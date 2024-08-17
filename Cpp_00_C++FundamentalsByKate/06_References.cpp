/*
 * 06_References.cpp
 *
 *  Created on: Jan 28, 2022
 *      Author: anura
 */



#include <iostream>
using namespace std;
void doubleFun1(int val){
	val=val*3;
}

void doubleFun2(int& val){
	val=val*3;
}

void doubleFun3(int const& val){
	//val=val*3;//ERROR as val cannot be changed
}

int main() {

	int num=10;
	int& referenceOfNum=num;
	cout<<num<<" "<<referenceOfNum<<endl;

	referenceOfNum=33;
	cout<<num<<" "<<referenceOfNum<<endl;

	//Note:reference cannot be assigned literals/constant value while defining it
	//int& refofA=10;//ERROR:cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'

    int const& constRef=10;//constant value ONLY  assigned to const references while defining
    //constRef=30;//ERROR
    cout<<constRef<<endl;


    //Note:reference cannot be declared without initialization
    //int& ref1;//ERROR : 'ref1' declared as reference but not initialized
    //ref1=num;

    //passing argument as pass by value
    cout<<"before passing to double fun 1:num="<<num<<endl;
    doubleFun1(num);
    cout<<"after passing to double fun 1:num="<<num<<endl;

    //passing argument as pass by reference
    cout<<"before passing to double fun 2:num="<<num<<endl;
    doubleFun2(num);
    cout<<"after passing to double fun 2:num="<<num<<endl;

    //ERROR as literal cannot be assigned to a reference
    // doubleFun2(20);


    doubleFun3(33);//literal can be assigned to const reference


    //const reference
    int const& constRefOfNum=num;
   // constRefOfNum=22;//ERROR const reference cannot change value

   //int& const constRefOfNum=num;//ERROR as this syntax not allowed


	return 0;
}

