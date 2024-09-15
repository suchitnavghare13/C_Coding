#include <iostream>
using namespace std;

void isprime(int n)
{
    int i=1;
    int count = 0;
    

    while (i<=n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
        
    }

    if (count == 2)
    {
        cout << "Is prime number ";
    }
    else
    {
        cout << "Is not prime number ";
    }
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    isprime(n);

    return 0;
}