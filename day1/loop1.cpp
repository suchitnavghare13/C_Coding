// 1,3,5...33
// 10,8,6..0 start with 10 end with 0
// 1,2,4...n
// n,n-1
// take start and end from user and print range
// start 2: end:6   2,3,4,5,6
// start 2: end:-1  2,1,0,-1

#include <iostream>
using namespace std;
int main()
{
    // for(int i=1;i<=33;i+=2){
    //     cout<<i<<"-";
    // }

    // cout << "Enter the number ";
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << "-";
    // }

    // cout << "Enter the number ";
    // int n;
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     cout << i << "-";
    // }

    int start, end, i;

    cout << "Enter the start ";
    cin >> start;
    cout << "Enter the end ";
    cin >> end;

    if (start < end)
    {
        for (int i = start; i <= end; i++)
        {
            cout << i << "-";
        }
    }
    else
    {
        for (int i = start; i >= end; i--)
        {
            cout << i << "-";
        }
    }

    return 0;
}