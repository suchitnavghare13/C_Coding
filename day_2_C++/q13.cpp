// Swap without third variable

#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 9;
    cout<<"Before swap "<<x<<" & "<<y;
    x = x + y ; 
    // x = 19
    y = x - y;
    // y = 10;
    x = x - y ;
    // x = 9; 
    cout<<"\nAfter swap "<<x<<" & "<<y;
    return 0;
}