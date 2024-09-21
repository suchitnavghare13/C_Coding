// Reverse of a 4 digit number

#include <iostream>
using namespace std;

int main()
{
    int digit, n = 2971, rno = 0;

    while(n > 0)
    {
        digit = n % 10;
        rno = rno * 10 + digit;
        n = n / 10;
    }
    cout <<"Sum of 4 digits of a number is : "<<rno;

    return 0;
}