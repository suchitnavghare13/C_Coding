#include <iostream>
using namespace std;

void isfact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Fact is "<<fact;


}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    isfact(n);
    return 0;
}