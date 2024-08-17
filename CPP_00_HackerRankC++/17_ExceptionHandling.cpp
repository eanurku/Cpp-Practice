/*
 * 17_ExceptionHandling.cpp
 *
 *  Created on: May 7, 2022
 *      Author: anurag
 */

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if (A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if (B == 0)
			throw 0;
		real = (A / B) * real;
		int ans = v.at(B);
		return real + A - B * ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T;
	cin >> T;
	while (T--) {
		long long A, B;
		cin >> A >> B;

		try {

			cout<<Server::compute(A, B)<<endl;

		} catch (invalid_argument &e) {

			cout << "Exception: "<<e.what() << endl;

		} catch (bad_alloc &e) {

			cout << "Not enough memory" << endl;
		}catch(int e){
			cout<<"Other Exception"<<endl;
		}

	}
	cout << Server::getLoad() << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



