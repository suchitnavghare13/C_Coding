//{11,22,11,33,11,22,11,44,11,55,11,33,22,11,22,33}
//each element with it frequency

#include<iostream>
using namespace std;
#include<vector>
#include<set>


int main()
{
 //vector has all data
 vector<int> v={11,22,11,33,11,22,11,44,11,55,11,33,22,11,22,33};
 
 //copy each element of vector to set
 set<int> s;
 for(int item:v)
 {
     s.insert(item);
 }
 //read each element from set and count it in vector


 for(int item:s)
 {
     cout<<item<<",";
 }

 return 1;
}
