// Sum of Expanded Geometric Sequence

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float g_sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for(i = 1;i <= n;i++){  
        g_sum= g_sum + 1/(float)i;
        // cout<<endl<<g_sum;
        
    }
    cout<<"\nThe sum of Expanded Geometric Sequence is : "<<g_sum;
    return 0;
}
