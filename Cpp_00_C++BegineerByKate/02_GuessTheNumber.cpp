/*
 * 02_GuessTheNumber.cpp
 *
 *  Created on: Jan 30, 2022
 *      Author: anura
 */

#include <iostream>
#include <time.h>
using std::cout;
using std::cin;
int main() {
	int number;
	int secret;
	srand(time(0));
	secret = rand() % 1000 + 1;
	cout << ">>>>>>>>>>Guess the number Game<<<<<<<:\n";

	int found = 0;
	while (!found) {
		cout << "enter the guess:";
		cin >> number;

		if (secret == number) {
			found = 1;
			cout << "your guess is right!! " << secret;
		} else if (number < secret) {
			cout << "Answer is more than the  guess\n";
		} else if (number > secret) {
			cout << "Answer is less than your guess\n";
		}

	}

}

