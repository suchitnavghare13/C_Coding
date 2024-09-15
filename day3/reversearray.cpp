// reverse 1 2 3 to 3 2 1

#include <iostream>
using namespace std;
int main()
{
    // create array:size > needed
    int a[50], n, index;

    // read needed size from it
    cout << "Enter size of array needed:";
    cin >> n;
    
    // add elements to array
    for (index = 0; index < n; index++)
    {
        cout << "\nElement at [" << index << "]:";
        cin >> a[index];
    }

    // print added elements
    cout << "Elements in array in reverse format are\n";
    for (index = n-1 ; index >= 0; index--)
    {
        cout << "\nElement@[" << index << "]:" << a[index];
    }

    return 0;
}