

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    //string str;
    //cin >> str;
    //cout << str;

    string str;
    getline(cin, str);
    cout << str<<"\n";

    //memebr functions in string
    cout << str.substr(3, 6)<<"\n";
    cout << str.length()<<"\n";
   

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

