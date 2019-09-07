#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Please enter your name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Hell, " << name << endl;
    return 0;
}