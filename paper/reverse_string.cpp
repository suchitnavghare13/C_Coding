#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter the name ";
    cin >> name;
    int flag = 1;
    int i,j;

    for ( i = 0, j = name.length()-1; i <= name.length()-1 && j >= 0; i++, j--)
    {
        if (name[i] != name[j]){
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout << "String is palindrome ";
    }
    else
    {
        cout << "String is not palindrome ";
    }

    return 0;
}