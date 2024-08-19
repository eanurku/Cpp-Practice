//============================================================================
// Name        : ForwardList.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<forward_list>
using namespace std;

int main() {

//	forward_list<int> flist = { 1, 2, 3, 4, 5 };
//	for (int el : flist) {
//		cout << el << " ";
//	}

//push_front

//	forward_list<int> flist = { 1, 2, 3, 4, 5 };
//	flist.push_front(10);
//
//	for (int el : flist) {
//		cout << el << " ";
//	}

//remove

//	forward_list<int> flist = { 1, 2, 3, 4, 5 };
//	flist.remove(2);
//
//	for (int el : flist) {
//		cout << el << " ";
//	}

//merge sorted list

//	forward_list<int> flist = { 11, 22, 33, 43, 55 };
//	forward_list<int> secondlist = { 10, 20, 30 };
//
//	flist.merge(secondlist);
//		for (int el : flist) {
//			cout << el << " ";
//		}

//splice after
		forward_list<int> flist = { 11, 22, 33, 43, 55 };
		forward_list<int> secondlist = { 10, 20, 30 };

		flist.splice_after(flist.before_begin(),secondlist);

		cout<<"first list"<<endl;
				for (int el : flist) {
					cout << el << " ";
				}

				cout<<"\nsecond list"<<endl;
				for (int el : secondlist) {
					cout << el << " ";
				}





	return 0;
}
