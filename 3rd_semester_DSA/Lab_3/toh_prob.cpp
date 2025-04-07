/*
    4. WAP to solve TOH problem using Recursion. Also Trace following:
toh(3, 'A' , 'C', 'B')
*/

#include <iostream>
using namespace std;

void toh(int n, char from_rod, char to_rod, char aux_rod)
{

    if (n == 1)
    {
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
        return;
    }

    toh(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move " << from_rod << " to " << to_rod << endl;

    toh(n - 1, aux_rod, to_rod, from_rod);
    cout << "Move " << from_rod << " to " << to_rod << endl;
}

int main()
{
    toh(3, 'A', 'B', 'C');
    return 0;
}
