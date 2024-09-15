/* function will do major work of transforming data to output
main only do:1 take data from user
                2.call function that can :
                    convert i/p to o/p
                    return answer
             3 print response/result
             
           
*/

#include<iostream>
using namespace std;
 int min(int no1,int no2)
 {
     if(no1<no2)
         return no1;
     else
         return no2;
 }

int main()
{
    int n1,n2;
    cout<<"Enter 2 numbers:";
    cin>>n1>>n2;
    cout<<"Minimum is:"<<min(n1,n2);
    return 0;
   
}