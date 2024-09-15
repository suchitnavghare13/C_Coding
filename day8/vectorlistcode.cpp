#include<iostream>
#include<string>
#include<vector>

using namespace std;
void display_menu()
{
    cout <<"\nMeraWala Shopping list:";
    cout << "\n------------------------";
    cout << "\n1.Add To List";
    cout << "\n2.Delete From List";
    cout << "\n3.Print List";
    cout << "\n4.Exit";
    cout << "\n:";
}
void addItem(vector<string>& sl)
{
    cout << "\nAdd item:";
    string item;
   
    getline(cin>>ws, item);
    sl.push_back(item);
    cout << "\nItem added";

}
void deleteItem(vector<string>& sl)
{
    if (sl.empty())
        cout << "\nEmpty List:";
    else
    {
        string item;
        cout << "\nEnter item to delete:";
        getline(cin >> ws, item);
        int position = 0;
        bool flag = false;//not found
        for (string i : sl)
        {
           
            if (i == item)
            {
                sl.erase(sl.begin() + position);
                cout << "\n" << item << " removed from list";
                flag = true;
                break;
            }
            position++;

        }
        if (flag == false)
            cout << "\n" << item << " not found in list";
    }
}
       
void printlist(vector<string>& sl)
{
    if (sl.empty())
        cout << "\nEmpty List:";
    else
    {
        cout << "\nItems in the list are\n";
        for (auto item : sl)
        {
            cout << "\n-->" << item;
        }
    }
}

int main()
{
    vector <string> shoppinglist;
    int choice;
    do
    {
        display_menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            printlist(shoppinglist);
            addItem(shoppinglist);
            break;
        case 2:
            printlist(shoppinglist);
            deleteItem(shoppinglist);
            break;

        case 3:
            printlist(shoppinglist);
            break;
        case 4:
            cout << "\nThanks for using code";
            break;

        default:
            cout << "\nWrong option selected";
            break;
        }


    } while (choice != 4);
}
