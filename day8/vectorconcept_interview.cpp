
#include<iostream>
using namespace std;
#include<vector>

int main()
{
 vector<float> v;
 int total=0;
 while(true)
 {
     int no;
     cout<<"\nEnter a number(-1 to stop):";
     cin>>no;
     if (no==-1)
         break;
     v.push_back(no);
     total=total+no;
 }
 float avg=total/v.size();
 v.push_back(total);
 v.push_back(avg);
 //adv for
 for( float item:v)
 {
     cout<<"\n"<<item;
 }
 return 1;
}