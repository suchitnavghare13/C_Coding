#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    float p,r,t,n;
    cout<<"Enter the p,r,t & n is : \n";
    cin>>p;
    cin>>r;
    cin>>t;
    cin>>n;

    cout << "\nFind compound interest is :"<< p * pow(1 + r/n,n*t);
    return 0;

    
}
