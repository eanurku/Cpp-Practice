#include <iostream>
#include <string>
#include<vector>

class Account{

private:
	int balance;
	std::vector<std::string> log;



public:

	Account();
	Account(int);
	int getBalance(){return balance; };
	std::string getReport();
};
