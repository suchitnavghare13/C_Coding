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
    void generate_human(string n,string g)
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
            cout<<"\nHi i am "<<name<<" ,a "<<gender<<" with adhar card no:"<<a_c_n;
        }
};

//must be created /init outside class also
//accessed using scope resolution ::
int Human::ACN_generator=202400;
int main()
{
Human h[5];//int a[10]
for(int i=0;i<5;i++)
{
    string n,g;
    cout<<"\nEnter name and gender:\n";
    cin>>n>>g;
    h[i].generate_human(n,g);
}
cout<<"\nList\n";
cout<<"---------------------------------------";
for(int i=0;i<5;i++)
{
    h[i].intro();
}


 
 return 0;

}