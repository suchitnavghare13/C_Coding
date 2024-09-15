// Print factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1 ;
    cout<<"Enter the number ";
    cin>>n;
    for(int i = n ;i >= 1;i--){ 
        fact = fact * i;
    }
    cout<<"Factorial of number "<<n<<" is : "<<fact;
    return 0;
}