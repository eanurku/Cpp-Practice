#include "Account.h"


Account::Account(std::string name,int bal){
	this->name=name;
	this->balance=bal;
}

int Account::getBalance(){
	return balance;
}

void Account::printAccount(){

	std::cout<<name<<" "<<balance;
}



