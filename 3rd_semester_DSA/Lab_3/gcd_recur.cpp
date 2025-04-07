/*
    2. WAP to calculate GCD of two numbers using Recursion.
*/

#include <iostream>
using namespace std;

int gcd_recursion(int val_1, int val_2)
{
    if (val_2 != 0)
        return gcd_recursion(val_2, val_1 % val_2);
    else
        return val_1;
}

int main()
{
    int x, y, result;
    cout << "Enter two positive integers (x > y): ";
    cin >> x >> y;
    result = gcd_recursion(x, y);
    cout << "The GCD of " << x << " and " << y << " is " << result << endl;
}