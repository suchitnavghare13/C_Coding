#include<iostream>
//friend function:
//function not part of class but has all right of member.
//not a member of class but can still access private data
// coded outside class
// proto-typed within class
using namespace std;
//forward decleration
class Inches;
class Feet
{
    private:
        float feet;
    public:
        void set_feet(float f)
        {
            feet=f;
            cout<<"\nFeet set to:"<<feet;
        }
        friend void add(Feet d1,Inches d2);// proto-typed within class

};
class Inches
{
    private:
        float inches;
    public:
        void set_inches(float i)
        {
            inches=i;
            cout<<"\nInches set to:"<<inches;
        }
        friend void add(Feet d1,Inches d2);// proto-typed within class

};
void add(Feet d1,Inches d2)
{
  cout<<"\nAdditing "<<d1.feet<<"Feet and "<<d2.inches<<"Inches we get ";
  cout<<d1.feet+d2.inches/12<< ", in Inches we get:"<<d1.feet*12+d2.inches<<".";
   
}

int main()
{
Feet o1;
Inches o2;
o1.set_feet(5);
o2.set_inches(25);
add(o1,o2);
}