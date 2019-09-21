#include <iostream>
using namespace std;

double power(double base, int exponent);
void print_power(double base, int exponent);

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    // double result = power(base, exponent);
    // cout << result << endl;
    print_power(base, exponent);
    return 0;
}

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

void print_power(double base, int exponent)
{
    double result = power(base, exponent);
    cout << "base: " << base << "\nexponent: " << exponent << "\nResult: " << result << endl;
}