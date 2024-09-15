// accept the billing amount

#include <iostream>
using namespace std;
int main()
{
    float amount, finalpay,discount;
    cout << "Enter the billing amount ";
    cin >> amount;

    if (amount > 5001)
    {
        cout << "10 percentoff ";
        discount =  (amount * 10) / 100;
    }
    else if (amount >= 2001)
    {
        cout << "5 percentoff ";
        discount =  (amount * 5) / 100;
    }
    else if (amount >= 1000)
    {
        cout << "2 percentoff ";
        discount =  (amount * 2) / 100;
    }
    else
    {
        cout << "no discount ";
        discount =  0;
    }

    finalpay = amount - discount;

    cout<<"\namt ";
    cout<<amount;

    cout<<"\nDiscount amt ";
    cout<<discount;

    cout<<"\nfinal amt ";
    cout<<finalpay;

    return 0;
}