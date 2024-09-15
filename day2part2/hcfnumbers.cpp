#include <iostream>

using namespace std;
int main()
{
    int n1, n2, x, i = 1;
    cout << "Enter the number n1 : ";
    cin >> n1;
    cout << "Enter the number n2 : ";
    cin >> n2;

    while (i <= n1 || i<= n2)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            x = i;
        }
        i++;
    }
    cout<<x;

    return 0;
}