//============================================================================
// Name        : Vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
//constructor
//  vector <string> listofstring1({"abc","cde","erc"});
//  vector <string> listofstring2={"xabc","cde","erc"};
//  vector <string> listofstring3(listofstring1);
//
//
//  for(string s:listofstring1){
//      cout<<s<<endl;
//  }
//  cout<<endl;
//
//  for(string s:listofstring2){
//      cout<<s<<endl;
//  }
//  cout<<endl;
//
//  for(string s:listofstring3){
//      cout<<s<<endl;
//  }
//  cout<<endl;

  //iterators
//  vector <string> listofstring1({"abc","cde","erc"});
//
//  std::vector<string>::iterator it;
//
//  for( it=listofstring1.begin();it !=listofstring1.end();it++){
//      cout<<*it<<endl;
//  }
//
//  cout<<endl;
//
//  for( auto it=listofstring1.begin();it !=listofstring1.end();it++){
//      cout<<*it<<endl;
//  }
//  cout<<endl;
//
//  for( auto it=listofstring1.rbegin();it !=listofstring1.rend();it++){
//      cout<<*it<<endl;
//  }

//add elements in  vector

//  vector<string> vectorList;
//  int num;
//  string str;
//
//  cin>>num;
//  cin.ignore();
//
//  while(num>0){
//      getline(cin,str);
//      vectorList.push_back(str);
//      num--;
//
//  }
//
//  for(string s:vectorList){
//      cout<<s<<endl;
//  }

//access operators [],at,data

//  vector<string> vect({"mon","sun","kun"});
//
//  for(auto i=0;i<vect.size();i++)
//    cout<<vect[i]<<endl;
//
//  for(auto i=0;i<vect.size();i++)
//    cout<<vect.at(i)<<endl;
//
//  	string *ptr=vect.data();
//  	cout<<ptr[0]<<endl;


//erase
//	vector<string> vect( { "mon", "sun", "kun" });
//
//	for (auto it = vect.begin(); it != vect.end(); it++) {
//		if ((*it) == "mon") {
//			vect.erase(it);
//		}
//	}
//
//	for (string s : vect) {
//		cout << s << endl;
//	}

//insert method

//	vector<string> vect( { "mon", "sun", "kun" });
//	vector<string> copyVect;
//	vect.insert(vect.begin() + 1, "sat");
//	for (string s : vect) {
//		cout << s << endl;
//	}
//
//	cout<<endl;
//
//	copyVect.insert(copyVect.begin(), vect.begin(), vect.end());
//	for (string s : copyVect) {
//		cout << s << endl;
//	}

//sort vector
//	vector<string> vect( { "mon", "xun", "kun" });
//
//	sort(vect.begin(),vect.end());
//	for(string str:vect){
//		cout<<str<<" "<<endl;
//	}

//search in vector
//
//	vector<string> vect( { "mon", "xun", "kun" });
//
//	std::vector<string>::iterator it;
//
//	 it=find(vect.begin(),vect.end(),"xun");
//
//	if(it!=vect.end())
//	cout<<"found at:"<<it-vect.begin()<<endl;
//	else
//		cout<<"not found"<<endl;
//
//
//	bool flag=binary_search(vect.begin(),vect.end(),"xun");
//
//	if(flag){
//		cout<<"found"<<endl;
//	}
//	else{
//		cout<<"not found"<<endl;
//	}
//
//	int pos=lower_bound(vect.begin(),vect.end(),"w")-vect.begin();
//
//	cout<<"pos="<<pos<<endl;


//2d vector

//	vector<vector<int>> vect={{1,2,3},{3,4,5}};
//	unsigned int i,j;
//
//	for(i=0;i<vect.size();i++) {
//		for(j=0;j<vect[i].size();j++) {
//			cout<<vect[i][j]<<" ";
//		}
//		cout<<endl;
//	}


//
//	int rows,cols;
//	cin>>rows;
//	cin>>cols;
//	vector<vector<int>> vector2d(rows,vector<int>(cols));
//
//	int i,j;
//	for(i=0;i<rows;i++){
//		for(j=0;j<cols;j++){
//			cin>>vector2d[i][j];
//		}
//	}
//
//	for(i=0;i<rows;i++){
//		for(j=0;j<cols;j++){
//			cout<<vector2d[i][j]<<" ";
//		}
//		cout<<endl;
//	}

//2d jagged vector

//	int rows,cols,i,j;
//	cin>>rows;
//	vector<vector<string>> vector2d(rows);
//
//	for(i=0;i<vector2d.size();i++){
//		cin>>cols;
//		vector2d[i]= vector<string>(cols);
//	}
//
//	for(i=0;i<vector2d.size();i++){
//		for(j=0;j<vector2d[i].size();j++){
//			cin>>vector2d[i][j];
//		}
//	}
//
//	for(i=0;i<vector2d.size();i++){
//		for(j=0;j<vector2d[i].size();j++){
//			cout<<vector2d[i][j]<<" ";
//		}
//		cout<<endl;
//	}




}
