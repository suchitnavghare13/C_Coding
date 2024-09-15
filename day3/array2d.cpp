#include <iostream>
using namespace std;
int main()
{
    // create array:size > needed
    int m[10][10], r, c, rows, columns;

    // read needed size from it
    cout << "Enter rows and columns\n";
    cin >> rows >> columns;
    
    // add elements to array
    for (r = 0; r < rows; r++) // r=0              r=1
    {
        for (c = 0; c < columns; c++) // c=0,1,2   c=0,1,2
        {
            cout << "Enter data at [" << r << "] [" << c << "] :";
            cin >> m[r][c];
        }
    }

    // print
    cout << "Matrix has\n";
    for (r = 0; r < rows; r++) // r=0              r=1
    {
        cout << endl;
        for (c = 0; c < columns; c++) // c=0,1,2   c=0,1,2
        {
            cout << m[r][c] << "\t";
        }
    }

    return 0;
}
