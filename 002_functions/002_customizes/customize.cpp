#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent);

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    // double power = pow(base, exponent);
    double powerResult = power(base, exponent);
    cout << powerResult << endl;
    return 0;
}

double power(double base, int exponent)
{
    // return 0.0;
    return pow(base, exponent);
}