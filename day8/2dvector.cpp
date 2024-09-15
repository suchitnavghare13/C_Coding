//given vector v with n elements entered by user till first -1
//v={44,11,8,77,65,45,33,12,89,09,12,25}
//create 2 vectors v_even v_odd and at end add all data in v_even
//X all data in v_odd and store answer in respective vectors
#include <iostream>
#include <vector>
using namespace std;


int main()
{
int total;
int product;
 vector<int> v={44,11,8,77,65,45,33,12,89,9,12,25};
vector<int> v_even,v_odd;
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
