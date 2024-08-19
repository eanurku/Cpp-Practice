//============================================================================
// Name        : Dequeue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<deque>
using namespace std;


int main() {


	deque<int> deque;

	deque.push_back(12);
	deque.push_front(14);
	deque.push_back(12);
	deque.push_front(14);
	deque.push_back(12);
	deque.push_front(14);

	while(!deque.empty()){

		cout<<deque.front()<<" ";
		deque.pop_front();
	}

	while(!deque.empty()){

		cout<<deque.back();
		deque.pop_back();
	}

	return 0;
}
