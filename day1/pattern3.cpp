

#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    for (int space = 1, i = 5; space <= 5 && i >= 1; space++, i--)
    { // control line

        for (int s = 1; s <= space; s++)
        { // print line
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        { // print line
            cout << "X ";
        }
        cout << endl;
    }

    return 0;
}