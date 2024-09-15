// in given array add +2 to each number & -1 to each odd number
// a[index] = a[index] operation

#include <iostream>
using namespace std;
int main()
{
    // create array:size > needed
    int a[]={11,21,34,51,22,74,89,62,50,31};
    int n = 10;
    int index;
    int sum = 0;

    cout<<"Before changes : ";
    for (index = 0; index < n; index++)
    {
        
        cout<<a[index]<<",";
    }

    // summation
    for (index = 0; index < n; index++)
    {
        if(a[index]%2==0){
            a[index]= a[index] + 2;

        }else{
            a[index]= a[index] - 1;
        }
    }

    cout<<"\nAfter changes : ";
    for (index = 0; index < n; index++)
    {
        
        cout<<a[index]<<",";
    }

    return 0;
}