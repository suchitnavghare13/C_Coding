/*
pass by value:
                one creates copy on data in local variable so changes seen only in function
pass by address:
                one will pass address refered by pointer in function,
                changes seen all places
                address is exposed(threat)
pass by reference:
                one will pass address internally refered by reference type
                changes seen all places
                address is not exposed(safe)
                           



*/

#include<iostream>
using namespace std;
void doubler(int no)
{
    cout<<"\nStart:"<<no;
    no=no*2;
    cout<<"\nEnd:"<<no;
}
void doubler2(int *no)//pointer
{
    cout<<"\nStart:"<<*no;
    *no=*no*2;
    cout<<"\nEnd:"<<*no;
}
void doubler3(int &no)//pointer
{
    cout<<"\nStart:"<<no;
    no=no*2;
    cout<<"\nEnd:"<<no;
}

int main()
{
    int number=10;
    cout<<endl<<"by value";
    cout<<"\nIn Main Start:"<<number;
    doubler(number);//passing value
    cout<<"\nIn Main at End:"<<number;
    cout<<endl<<"by address";
    cout<<"\nIn Main Start2:"<<number;
    doubler2(&number);//passing by address:pointer
    cout<<"\nIn Main at End2:"<<number;
    cout<<endl<<"by ref";
    cout<<"\nIn Main Start3:"<<number;
    doubler3(number);//passing by ref:reference
    cout<<"\nIn Main at End3:"<<number;
    return 0;
   
}