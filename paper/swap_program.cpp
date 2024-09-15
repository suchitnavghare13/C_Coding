#include <iostream>
using namespace std;

void swap(int n1,int n2){
    int temp;
    cout<<"Before swap "<<n1<<" & "<<n2;
    // temp = n1;
    // n1 = n2;
    // n2 = temp;

    // n1 = n1 + n2;
    // n2 = n1 - n2;
    // n1 = n1 - n2;

    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;


    cout<<"\nAfter swap "<<n1<<" & "<<n2;

}

int main(){
    int n1,n2;
    cout<<"Enter the number ";
    cin>>n1>>n2;
    swap(n1,n2);
    return 0;
}