// read a rating from user /5.0
// if 4 above print super se upar
// if below 4 but at 3 good
// if below 3 but at 2 ok
// if below 2 bad

#include <iostream>
using namespace std;
int main()
{
    float rating;
    cout << "Enter the rating ";
    cin >> rating;
    if (rating > 4)
    {
        cout << "super se upar";
    }
    else if (rating >= 3)
    {
        cout << "good";
    }
    else if (rating >= 2)
    {
        cout << "ok";
    }
    else
    {
        cout << "bad";
    }

    return 0;
}