// Numbers not divisible by 2, 3, 5

#include <iostream>
using namespace std;

int main()
{
    int n,count;
    count=0;
    cout<<"Enter the number ";
    cin>>n;
    for(int i = 1;i <= n;i++){   

        if(i%2!=0 && i%3!=0 && i%5!=0){
          cout<<"\nEnter the number not divisible by 2, 3, 5 is : "<<i;
          count++;
        }   
    }
    cout<<"\nTotal numbers "<<count;

    return 0;
}