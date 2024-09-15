// Count zero, odd & even digits

#include <iostream>
using namespace std;
int main()
{
    int even,odd,n,digit,zero=0;
    cout<<"Enter any number is : ";
    cin>>n;

    while(n>0){
        digit = n%10;
        n = n/10;

        if((digit!=0) && (digit%2==0)){
            even++;
        }else if(digit==0){
            zero++;
        }else{
            odd++;
        }
    }
    cout<<"\neven numbers "<<even<<" odd numbers "<<odd<<" zero numbers "<<zero;



    return 0;
  
}