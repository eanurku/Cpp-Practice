//============================================================================
// Name        : Queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<queue>
using namespace std;

int main() {


	queue<int> queue;

	queue.push(12);
	queue.push(14);
	queue.push(3);
	queue.push(23);
	queue.push(11);


	cout<<queue.empty()<<endl;

	while(!queue.empty()){
		cout<<queue.front()<<" ";
		queue.pop();
	}


	return 0;
}
