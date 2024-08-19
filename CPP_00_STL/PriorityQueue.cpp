//============================================================================
// Name        : PriorityQueue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<queue>

using namespace std;

int main() {

//max heap
//	priority_queue<int> pqueue;
//
//	pqueue.push(12);
//	pqueue.push(1);
//	pqueue.push(32);
//	pqueue.push(3);
//	pqueue.push(11);
//	pqueue.push(16);
//
//	while(!pqueue.empty()){
//
//		cout<<pqueue.top()<<" ";
//		pqueue.pop();
//
//	}

//minheap

	priority_queue<int, vector<int>, greater<int>> minPQueue;
	minPQueue.push(12);
	minPQueue.push(11);
	minPQueue.push(31);
	minPQueue.push(41);
	minPQueue.push(2);
	minPQueue.push(3);
	minPQueue.push(1);
	minPQueue.push(6);

	while (!minPQueue.empty()) {
		cout << minPQueue.top() << " ";
		minPQueue.pop();

	}
//custom comparision


	return 0;
}
