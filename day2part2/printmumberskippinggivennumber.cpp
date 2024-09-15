#include <iostream>

using namespace std;
int main()
{
    int i=1;
    while(i<=10){
        if(i==6 || i==8){
            i++;
            continue;
            
        }
        cout<<i<<" ";
        i++;
        
    }

    return 0;
}