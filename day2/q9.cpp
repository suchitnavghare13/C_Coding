// Sum of 3 digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n = 2971;
    int lastdigit = n%10;
    int secondlastdigit = (n/10)%10; 
    int thirdlastdigit = (n/100)%10;
    
    cout<<"lastdigit of a number : "<<lastdigit;
    cout<<"\nsecondlastdigit of a number : "<<secondlastdigit;
    cout<<"\nthirdlastdigit of a number : "<<thirdlastdigit;
    cout<<"\nSum of 3 digits of a number : "<<lastdigit+secondlastdigit+thirdlastdigit;

    return 0;
}