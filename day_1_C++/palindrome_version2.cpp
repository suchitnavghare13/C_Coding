// palindrome
// say yes or no
// if no is = reverse of itself 121 yes 123 no

#include <iostream>
using namespace std;
int main()
{
    int no, count = 0;
    for (no = 100; no <= 200; no++)
    {

        int rno = 0;
        int tno = no;
        while (tno > 0) // act on copy
        {
            int digit = tno % 10;
            tno = tno / 10;
            rno = rno * 10 + digit; // pow(digit,3)----math.h
        }
        // compare rno with orginal is math yes else no
        if (rno == no)
        {
            cout << "\nAre the palindrome no ";
            cout << no;
            count++;
        }
    }
    cout << "\nTotal of " << count << " are palindrome";
    return 0;
}