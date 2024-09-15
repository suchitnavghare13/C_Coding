/*
implement shopping list app with following
1.add to list
2.delete from list on position
3.print list
*/
#include<iostream>
using namespace std;
#include<list>

int main()
{
 list<string> my_list;
 //menu
 //switch--call options--1,2,3,0.exit
 for( int item:v)
 {
     cout<<"\n"<<item;
     if(item%2==0)
     {
         cout<<"->Even"<<endl;
         v_even.push_back(item);
         total+=item;
     }
     else
     {
         cout<<"->Odd"<<endl;
         v_odd.push_back(item);
         product=product*item;
     }
 }
 v_even.push_back(total);
 v_odd.push_back(product);

 return 1;
}
