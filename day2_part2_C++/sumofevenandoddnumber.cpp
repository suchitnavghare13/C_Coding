#include <iostream>

using namespace std;
int main()
{
    int i=1;
    int s1=0;int s2=0;

    while(i<=10){
        if(i%2==0){
            s1=s1+i;
        }else{
            s2=s2+i;
        }
        i++;
    }
    cout<<"Sum of even number is : "<<s1;
    cout<<"\nSum of odd number is : "<<s2;

    return 0;
}