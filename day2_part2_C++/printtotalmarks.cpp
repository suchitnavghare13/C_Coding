// Print total marks of student

#include <iostream>
using namespace std;
int main()
{
    int m,s;
    s=0;
    for(int i =0;i<=5;i++){
        cout<<"subject "<<i<<" : ";
        cin>>m;
        s = s + m;
    }
    cout<<"\nTotal marks "<<s;
    return 0;
  
}
