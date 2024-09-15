#include<iostream>
using namespace std;
class Human
{
  //data member
 private:
    string name,gender;
 //function member
 public:
     Human()
     {
         cout<<"\nDefault Constructor called";
         name="unknown";
         gender="?";
     }
    Human(string n,string g)
        {
            cout<<"\nParameterized Constructor called";
            name=n;
            gender=g;
        }
    Human(Human &obj)
        {
            cout<<"\nCopy Constructor called";
            name=obj.name;
            gender=obj.gender;
        }
    ~Human()
     {
         cout<<"\nDestructor called";
         cout<<"R>I>P..."<<name;
         //do those tasks that need to be done before removing object
         //by default removes given memory for object.
     }
       
    void intro()
        {
            cout<<"\nHi i am "<<name<<" ,a "<<gender;
        }
};

int main()
{
  Human h;//default:creates object with default values
  h.intro();
  Human h2("super man","male");//parametrized-creates object from given data
  h2.intro();
  Human h3("shaktiman","male");//copy constructor:creates a duplicate copy of preexisiting
  h3.intro();
 
 return 0;

}
