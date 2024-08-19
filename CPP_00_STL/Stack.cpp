//============================================================================
// Name        : Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
using namespace std;

int main() {

	stack<int> stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);

	while(!stack.empty()){

		cout<<stack.top()<<" ";
		stack.pop();
	}

	return 0;
}
