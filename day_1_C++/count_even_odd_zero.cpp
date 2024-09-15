// jim jam opps
// keepn taking number from user
// if number is even print jim
// if number is odd print jam
// if zero print opps
// after 3 opps stop the code

// #include <iostream>
// using namespace std;
// int main()
// {
//     int no;
//     int even = 0, odd = 0;
//     while (1)
//     {
//         cout << "Enter: ";
//         cin >> no;
//         if (no == 0)
//         {
//             break; // stop
//         }
//         if (no % 2 == 0)
//         {
//             even++;
//             cout<<jim;
//         }
//         if (no % 2 == 1)
//         {
//             odd++;
//         }
//     }

//     cout << "Total numbers of odd & even " << (even + odd);
//     cout << "\nTotal numbers of even " << (even);
//     cout << "\nTotal numbers of odd " << (odd);

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int oops_count = 0;

    while (1)
    {
        cout << "Enter no: ";
        cin >> i;

        if (i == 0)
        {
            oops_count++;
            cout<<"opps";
        }
        if(oops_count==3)
        break;

        if (i % 2 == 0 && n!=0)
        {
            cout << "jim";
            cout << endl;
        }

        if (i % 2 == 1)
        {
            cout << "jam";
            cout << endl;
        }


        if (oops_count > 3)
            break;
    }
    // cout << "Total numbers of odd & even " << (even + odd);
    //     cout << "\nTotal numbers of even " << (even);
    //     cout << "\nTotal numbers of odd " << (odd);
    return 0;
}