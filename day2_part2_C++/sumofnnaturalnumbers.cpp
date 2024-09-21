// Sum of first n even numbers

#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int sum = 0;
    cout<<"Enter the number ";
    cin>>n;
    for(i = 0;i <= n;i++){  
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of n natural numbers is :"<<sum;
    return 0;
}