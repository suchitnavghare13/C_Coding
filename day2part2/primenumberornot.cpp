#include <iostream>

using namespace std;
int main()
{
    int n,count=0;
    int i = 1;
    cout << "Enter the number n1 : ";
    cin >> n;

    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++; 
    }
    if(count==2){
        cout<<"The given number is prime ";
    }else{
        cout<<"The given number is not prime ";
    }

    return 0;
}