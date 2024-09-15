// write a function to read two number from user and add them

#include <iostream>
using namespace std;
// coding functions create menu driven cal for 1.add 2.sub 3.mul 4.div 0.exit
// o/p
//     1.add 2.sub 3.mul 4.div
//     1. enter 2 numbers 10 20
//         10+20=30
// gloabal variable
int a[2];

void read()
{
    cout << "\nEnter 2 numbers:";
    cin >> a[0] >> a[1];
}
void menu()
{
    cout << endl
         << "My Cal";
    cout << endl
         << "1.Add";
    cout << endl
         << "2.Sub";
    cout << endl
         << "3.Mul";
    cout << endl
         << "4.Div";
    cout << endl
         << "0.Exit";
    cout << endl
         << ":";
}
void add(int no1, int no2)
{
    // printing from function
    cout << "\n"
         << no1 << " + " << no2 << " = " << (no1 + no2);
}

void divs(int no1, int no2)
{
    // printing from function
    cout << "\n"
         << no1 << " / " << no2 << " = " << ((float)no1 / no2);
}
void sub(int no1, int no2)
{
    // printing from function
    cout << "\n"
         << no1 << " - " << no2 << " = " << (no1 - no2);
}
void mul(int no1, int no2)
{
    // printing from function
    cout << "\n"
         << no1 << " X " << no2 << " = " << (no1 * no2);
}
int main()
{
    int n1, n2, choice;
    do
    {
        menu();
        cin >> choice;

        switch (choice)
        {

        case 1:
            read();
            add(a[0], a[1]);
            break;
        case 2:
            read();
            sub(a[0], a[1]);
            break;
        case 3:
            read();
            mul(a[0], a[1]);
            break;
        case 4:
            read();
            divs(a[0], a[1]);
            break;
        case 0:
            cout << endl
                 << "coded by amar.............bye";
            break;
        default:
            cout << endl
                 << "Wrong option selected";
        }
    } while (choice != 0);

    return 0;
}

// #include <iostream>
// using namespace std;

// void add(int no1, int no2)
// {
//     cout << "Addition of two number " << no1 + no2;
// }

// void sub(int no1, int no2)
// {
//     cout << "Subtraction of two number " << no1 - no2;
// }

// void mul(int no1, int no2)
// {
//     cout << "Multiplication of two number " << no1 * no2;
// }

// void divs(int no1, int no2)
// {
//     cout << "Division of two number " << (float)(no1 / no2);
// }

// int main()
// {
//     int n1, n2, a;

//     cout << "\nPress 1 for add ";
//     cout << "\nPress 2 for sub ";
//     cout << "\nPress 3 for mul ";
//     cout << "\nPress 4 for div ";
//     cout << "\nPress 0 for div ";

//     cout << "Enter the number n1 ";
//     cin >> n1;
//     cout << "Enter the number n2 ";
//     cin >> n2;

//     cout << "\nEnter option ";
//     cin >> a;

//     switch (a)
//     {
//     case 1:
//         add(n1, n2);
//         break;

//     case 2:
//         sub(n1, n2);
//         break;

//     case 3:
//         mul(n1, n2);
//         break;

//     case 4:
//         divs(n1, n2);
//         break;

//     case 0:
//         cout << "bye ";
//         break;

//     default:
//         cout << "wrong option selected ";
//         break;
//     }
// }