// Find total marks & percentage

#include <iostream>
using namespace std;

int main()
{
    float s1,s2,s3,percentage;
    
    cout<<"Enter the marks of three subject\n";
    cin>>s1;
    cin>>s2;
    cin>>s3;

    float total_marks = s1+s2+s3;

    percentage = (total_marks/300)*100;

    cout << "Total marks is "<<total_marks<<" & its percentage "<<percentage;
    return 0;
}