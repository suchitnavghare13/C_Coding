#include<iostream>
using namespace std;
class Human
{
  //data member
 private:
    string name,gender;
    int a_c_n;
 //function member
 public:
     static int ACN_generator;
    Human(string n,string g)
        {
            cout<<"\nParameterized Constructor called";
            name=n;
            gender=g;
            a_c_n=++ACN_generator;
            cout<<"\nHi "<<name<<" ,You Adhar Card number is:"<<a_c_n;
        }
   
    ~Human()
     {
         cout<<"\nDestructor called";
         cout<<"R>I>P..."<<name;
     }
       
    void intro()
        {
            cout<<"\nHi i am "<<name<<" ,a "<<gender;
        }
};

//must be created /init outside class also
//accessed using scope resolution ::
int Human::ACN_generator=202400;
int main()
{
  Human h("wonder woman","female");
  h.intro();
 
  Human h2("super man","male");
  h2.intro();
 
  Human h3("shaktiman","male");
  h3.intro();
 
  //accessed using scope resolution ::
 
 return 0;

}