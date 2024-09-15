#include<iostream>
//ask who are you?
//say hi,<name>
//ask where are you from <name>
//read native
//say so<name> you are from <native>

using namespace std;
int main()
{
    string name;
    cout<<"Who are you ? ";
    getline(cin,name);
    cout<<name;

    cout<<"\nhii, "<<name;
    string native;
    cout<<"\nWhere are you from "<<name<<" ? ";
    cin>>native;
    cout<<"\nso "<<name<<" you are from "<<native;

    // cout<<"Enter a line again\n";
    // getline(cin,line);
    // cout<<"\nNow Line entered is:"<<line;
    return 0;
   
}