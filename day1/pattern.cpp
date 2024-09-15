
#include <iostream>
using namespace std;
int main()
{
    for (int i = 7; i >= 1; i -= 2)
    { // control line
        for (int j = 1; j <= i; j++)
        { // print line
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}