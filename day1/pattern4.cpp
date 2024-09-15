
#include <iostream>
using namespace std;
int main()
{
    int i, j, space;
    char ic, jc;
    for (space = 5, i = 1, ic = 'A'; space >= 1 && i <= 5 && ic <= 'E'; space--, i++, ic++)
    { // control line

        // space
        for (int s = 1; s <= space; s++)
        {
            cout << " ";
        }

        // number
        for (int j = 1; j <= i; j++)
        { // print line
            cout << j;
        }

        // alpha
        for (char jc = 'A'; jc <= ic; jc++)
        { // print line
            cout << jc;
        }

        cout << endl;
    }

    return 0;
}