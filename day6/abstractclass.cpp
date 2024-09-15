#include<iostream>
//friend function:
//function not part of class but has all right of member.
//not a member of class but can still access private data
// coded outside class
// proto-typed within class
using namespace std;
class A
{
    private:
        int secrate=123;
    public:
        void member()
        {
            cout<<"\nSecrate is:"<<secrate;
        }
        friend void secrate_access(A obj);// proto-typed within class
};
void secrate_access(A obj)// coded outside class
//one needs to pass the object then private and all data of object can be accessed
{
    cout<<"\nSecrate from friend:"<<obj.secrate<<" kisi ko maat bolna";
    //not a member of class but can still access private data
}

int main()
{
A obj;
obj.member();
secrate_access(obj);
}
