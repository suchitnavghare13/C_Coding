
#include<iostream>
using namespace std;
int main()
{
    //create array:size > needed
    int a[50],n,index,sum=0;    
    //read needed size from it
    cout<<"Enter size of array needed:";
    cin>>n;
    //add elements to array
    for(index=0;index<n;index++)
    {
        cout<<"\nElement at ["<<index<<"]:";
        cin>>a[index];
    }
   
    //summation
    for(index=0;index<n;index++)
    {
        sum=sum+a[index];
    }
   
    cout<<"\nSum is:"<<sum;
   
    return 0;
   
}