/*
 * 03_Sorting.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: anura
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Employee{
	private :
		int id;
		string name;
		int salary;
	public:
	 Employee(int id,string name,int salary):id(id),name(name),salary(salary){	 };
	 string getName(){return name;}
	 int getId(){return id;};
	 int getSalary(){return salary;};
};

int main() {

	vector<int> list{3,2,1,5,91,7,6,4,10,11};

	//stl sort()
	sort(begin(list),end(list));

	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;

	//stl sort() with comparator
	vector<Employee> empList{
		{12,"monu",1000},
		{12,"fonu",2000},
		{12,"sonu",1000},
		{12,"zlar",1000},
		{12,"katu",1000},
		{12,"pahlu",2000},
		{12,"anu",2000},
		{12,"creas",1000},
	};
	sort(begin(empList), end(empList),[](Employee e1,Employee e2){
		if(e1.getSalary()==e2.getSalary()){
			return e1.getName()<e2.getName();
		}
		return e1.getSalary()<e2.getSalary();

	});
	for(auto e:empList){
		cout<<e.getName()<<" "<<e.getSalary()<<endl;
	}
	cout<<endl;

	//stl stable_sort
	sort(begin(empList), end(empList),[](Employee e1,Employee e2){
		return e1.getName()>e2.getName();
	});
	stable_sort(begin(empList), end(empList),[](Employee e1,Employee e2){
		return e1.getSalary()>e2.getSalary();
	});


	for(auto e:empList){
		cout<<e.getName()<<" "<<e.getSalary()<<endl;
	}
	cout<<endl;

	//stl is_sorted()
	auto isSorted=is_sorted(begin(list), end(list));
	cout<<"is sorted list in asc order="<<isSorted<<endl;

	auto isSortedEmpList=is_sorted(begin(empList), end(empList),[](Employee e1,Employee e2){return e1.getSalary()>e2.getSalary();});
	cout<<"is sorted employee list in desc order="<<isSortedEmpList<<endl;


	//stl find largest,smallest
	auto maxElement=max_element(begin(list), end(list));
	cout<<"max element ="<<*maxElement<<endl;

	maxElement=is_sorted(begin(list), end(list))?end(list)-1:max_element(begin(list), end(list));
	cout<<"max element ="<<*maxElement<<endl;

	//stl upper_bound(),lower_bound()
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;
	auto upperValue=upper_bound(begin(list), end(list),10);
	cout<<"upper value="<<*upperValue<<endl;

	auto lowerValue=lower_bound(begin(list), end(list), 8);
	cout<<"lower value="<<*lowerValue<<endl;

	//stl shuffle()
	cout<<"before shuffle"<<endl;
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;
	random_device randomdevice;
	mt19937 g( randomdevice());

	shuffle(begin(list), end(list), g);
	cout<<"after shuffle"<<endl;
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;


	//stl partial_sort()
	cout<<"------------------partial sort---------------"<<endl;
	const int pageSize=4;//get first page smallest elements
	partial_sort(begin(list), begin(list)+pageSize, end(list));
	for(auto e:list){
		cout<<e<<" ";
	}
	partial_sort(begin(list)+pageSize, begin(list)+2*pageSize, end(list));//get next page sorted smallest elements
	for(auto e:list){
		cout<<e<<" ";
	}
	cout<<endl;

	//stl is_sorted_until()
	cout<<endl;
	auto sortedUntil=is_sorted_until(begin(list), end(list));
	cout<<"sorted until "<<*sortedUntil<<endl;

	//stl partial_sort_copy
	vector<int> sortedElements(pageSize);
	partial_sort_copy(begin(list), end(list), begin(sortedElements), end(sortedElements));
	for(auto e:sortedElements){
		cout<<e<<" ";
	}
	cout<<endl;

	partial_sort_copy(begin(list)+pageSize, end(list), begin(sortedElements), end(sortedElements));//get next page sorted elements
	for(auto e:sortedElements){
		cout<<e<<" ";
	}
	cout<<endl;

	//stl nth element : return nth position element when list is sorted format.
	vector<int> newList{3,2,1,5,6,7,31,22,13};
	cout<<"current list:"<<endl;
	for(auto e:newList){
		cout<<e<<" ";
	}
	cout<<endl;

	int position=4;//consider position start from 0
	nth_element(begin(newList),begin(newList)+position,end(newList));

	 cout<<"element at position "<<position<<" ="<<*(begin(newList)+position)<<endl;











	return 0;
}


