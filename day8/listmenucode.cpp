/*
implement shopping list app with following
1.add to list
2.delete from list on position
3.print list
*/
#include <iostream>
using namespace std;
#include <list>

int main()
{
    int choice, n;
    list<string> my_list;
    // menu
    // switch--call options--1,2,3,0.exit

    do
    {

        
        cout << "\n Enter the choice";
        cin >> n;
        switch (choice)
        {

        case 1:
            cout << "add to list " << endl;
            break;

        case 2:
            cout << "delete from list on position " << endl;
            break;

        case 3:
            cout << "print list " << endl;
            break;

        case 4:
            cout << "Tata bye bye " << endl;
            break;

        default:
            cout << "wrong option " << endl ;
            break;
        }

    } while (choice!=0);

        return 1;
}
