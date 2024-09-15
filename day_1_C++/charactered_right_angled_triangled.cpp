
#include <iostream>
using namespace std;
int main()
{
    
    for (char i = 'A'; i <= 'E'; i++)
    { // control line
        for (char j = 'A'; j <= i; j++)
        { // print line
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}