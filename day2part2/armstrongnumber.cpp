// Armstrong number

#include <iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter a number:";
    cin >> no;
    int sum = 0;
    int tno = no;
    while (tno > 0) // act on copy
    {
        int digit = tno % 10;
        tno = tno / 10;
        sum += (digit * digit * digit); // pow(digit,3)----math.h
    }
    // compare sum with orginal is math yes else no
    if (sum == no)
        cout << no << " yes";
    else
        cout << no << " no";
    return 0;
}