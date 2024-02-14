#include "Account.h"
using namespace std;

Account::Account():balance(0){};
Account::Account(int amount):balance(amount){};
string Account::getReport(){
	return "this is the report";
}

