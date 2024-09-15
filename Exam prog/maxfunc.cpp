/* function will do major work of transforming data to output
main only do:1 take data from user
                2.call function that can :
                    convert i/p to o/p
                    return answer
             3 print response/result
             
           
*/

#include<iostream>
using namespace std;
 int max(int no1,int no2)
 {
     if(no1>no2)
         return no1;
     else
         return no2;
 }

int main()
{
    int n1,n2,n3,n4;
    cout<<"Enter 4 numbers:";
    cin>>n1>>n2>>n3>>n4;
    cout<<"Minimum is:"<<max(max(n1,n2),max(n3,n4));
    return 0;
   
}