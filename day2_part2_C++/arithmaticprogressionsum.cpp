// Arithmetic progression & its sum

#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    sum=0;
    cout<<"Enter the number ";
    cout<<"1 + 2 + 3 + 4 + 5 + ... + n is Arithmetic progression";
    cin>>n;
    for(int i = 0;i <= n;i++){   
        sum = sum + i;
    }
    cout<<"Arithmetic progression & its sum is : "<<sum;
    return 0;
}