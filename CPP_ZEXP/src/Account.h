#include<iostream>
#include <string.h>

class Account{
	private:
	int balance;
	std::string name;

	public:
	  Account(std::string name,int balance);
	  int getBalance();
	  void printAccount();
};
