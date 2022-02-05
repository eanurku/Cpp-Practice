/*
 * 02_Finding.cpp
 *
 *  Created on: Feb 3, 2022
 *      Author: anura
 */

#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> list{9,8,3,4,5,1,2,2,6,6,7,3,4,5};

	int target=3;
	//old way
	for(int i=0;i<list.size();i++){

		if(list[i]==target){
            cout<<"old way :found target at index="<<i<<endl<<endl;
            break;
		}
	}

	//stl way find()
	auto result=find(begin(list), end(list), 31);

	if(result!=end(list)){
		cout<<"find() : found target"<<endl<<endl;
	}else{
		cout<<"find() : target not found"<<endl<<endl;
	}

	//stl find_if()
    auto firstOddResult=find_if(begin(list),end(list),[](auto e){return e%2!=0;});
    if(firstOddResult!=end(list)){
    	cout<<"find_if() : found first odd element in list="<<*firstOddResult<<endl<<endl;
    }else{
    	cout<<"find_if() : odd element not found"<<endl<<endl;
    }

    //stl find_if_not()
    auto firstEvenResult=find_if_not(begin(list),end(list),[](auto e){return e%2!=0;});
    if(firstEvenResult!=end(list)){
    	cout<<"find_if_not() : found first even result in list="<<*firstEvenResult<<endl<<endl;
    }else{
    	cout<<"find_if_not() : first even result not found"<<endl<<endl;
    }


    //stl find_first_of()
    vector<int> sublist1{32,4,5};
    auto firstmatchedElementFromSublist=find_first_of(begin(list), end(list), begin(sublist1),end(sublist1));
    if(firstmatchedElementFromSublist!=end(list)){
    	cout<<"find_first_of() : found matched first element from sublist="<<*firstmatchedElementFromSublist<<endl<<endl;
    }else{
    	cout<<"find_first_of : Not found matched first element from sublist"<<endl<<endl;
    }

    //stl search()
    vector<int> sublist{3,4,5};
    auto matchingSublistStart=search(begin(list), end(list), begin(sublist),end(sublist));
    if(matchingSublistStart!=end(list)){
    	cout<<"search() : found matching sublist in list starting at="<<*matchingSublistStart<<endl<<endl;
    }
    else{
    	cout<<"search() : Not found matching sublist in list starting"<<endl<<endl;
    }

    //stl find_end() ~  search()
     matchingSublistStart=find_end(begin(list), end(list), begin(sublist),end(sublist));
     matchingSublistStart--;//it will point to 7
    if(matchingSublistStart!=end(list)){
    	cout<<"find_end() : found last matching sublist in list starting at="<<*matchingSublistStart<<endl<<endl;
    }
    else{
    	cout<<"find_end() : Not found last matching sublist in list starting"<<endl<<endl;
    }
    //stl search_n()
    auto consecutiveValueStart=search_n(begin(list), end(list), 2,6);

    if(consecutiveValueStart!=end(list)){
    	cout<<"search_n() : found consecutive  value ="<<*consecutiveValueStart<<endl<<endl;
    }else{
    	cout<<"search_n() : Not found consecutive  value"<<endl<<endl;
    }


    //stl adjacent_find()
    auto adjacentResult=adjacent_find(begin(list), end(list));

    if(adjacentResult!=end(list)){
    	cout<<"adjacent_find() : found first set of duplicates "<<*adjacentResult<<endl<<endl;
    }else{
    	cout<<"adjacent_find() : Not found first set of duplicates "<<endl<<endl;
    }


	return 0;
}



