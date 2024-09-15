/* write a function that reads full name and returns initials
i/p: amar mukund panchal
o/p: a.m.p    
*/

#include<iostream>
#include<string>
using namespace std;
string initial_creator(string full_name)
{

    string init(" ");
    init=init+full_name[0];
    for(int i=1;full_name[i]!='\0';i++)
    {
       
        if(full_name[i]==' ')
            {
                init=init+"."+full_name[i+1];
            }
    }
    return init;
}

int main()
{
   
   string full_name;
   string i;
   cout<<"\nEnter Full Name :";
    getline(cin,full_name);
    cout<<"\nFull Name :"<<full_name;
    cout<<"\n\nInitials:"<<initial_creator(full_name);
    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    return 0;
   
}