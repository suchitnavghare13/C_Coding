// Harmonic sequence & its sum

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float h_sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for(i = 1;i <= n;i++){  
        h_sum= h_sum + 1/(float)i;
        
    }
    cout<<"The sum of harmonic sequence is : "<<h_sum;
    return 0;
}