// Swap with bitwise operator

#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int y = 8;
    cout<<"Before swap "<<x<<" & "<<y;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"\nAfter swap "<<x<<" & "<<y;

    return 0;
}