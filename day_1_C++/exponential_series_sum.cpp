// Exponential series & its sum

#include <iostream>
using namespace std;

int main()
{
    int sum_of_squares=0;
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"\n1^1 + 2^2 + ... + 3^3 ";
    for(int i = 1;i <= 15;i++){   
        sum_of_squares = (n * (n + 1)*(2*n + 1))/6;
    }
    cout<<"\nExponential series sum is :"<<sum_of_squares;
    return 0;
}



