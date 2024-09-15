
#include <iostream>
using namespace std;
int main()
{
    int k=1;
    for (int i = 1; i <= 5; i++)
    { // control line
        for (int j = 1; j <= i; j++)
        { // print line
            cout << k << " ";
            k += 2;
        }
        cout << endl;
    }

    return 0;
}