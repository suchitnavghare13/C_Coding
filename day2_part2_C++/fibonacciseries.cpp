// Calculate sum of Fibonacci series

#include <iostream>
using namespace std;
int main()
{
    int i,f1,f2,f3,no;
    cout << "Enter a number:";
    f1=0;
    f2=1;
    cin >> no;
    for(i=2;i<no;++i){
        f3=f2+f1;
        cout<<endl<<"Fibonacci series is "<<f3;
        f1=f2;
        f2=f3;

    }
    return 0;
  
}