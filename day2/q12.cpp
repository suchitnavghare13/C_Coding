// Swap using third variable

#include <iostream>
using namespace std;

int main()
{
    int n1 = 7,n2 = 9;
    cout<<"Before swap "<<n1<<" & "<<n2;
    int temp;
    temp = n1;
    n1=n2;
    n2=temp;
    cout<<"\nAfter swap "<<n1<<" & "<<n2;
    return 0;
}