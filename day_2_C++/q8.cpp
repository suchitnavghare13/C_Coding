// Add two digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n = 123;
    int lastdigit = n%10;
    int secondlastdigit = (n/10)%10; 
    

    cout<<"lastdigit of a number : "<<lastdigit;
    cout<<"\nsecondlastdigit of a number : "<<secondlastdigit;
    cout<<"\nAdd two digits of a number : "<<lastdigit+secondlastdigit;

    
    return 0;
}