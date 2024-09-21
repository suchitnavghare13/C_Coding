// Sum of 4 digits of a number

#include <iostream>
using namespace std;

int main()
{
    int digit, n = 2971, sum = 0;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    cout <<"Sum of 4 digits of a number is : "<<sum;

    return 0;
}