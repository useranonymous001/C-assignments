
/*
    1. WAP to calculate factorial of a number using Recursion.
*/

#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursion(n - 1);
    }
}

int main()
{
    int num = 5;
    int result = recursion(num);
    cout << "The Factorial of " << num << " using recursion is " << result << endl;
    return 0;
}