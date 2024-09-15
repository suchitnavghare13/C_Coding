// Square roots of 1 to 9 numbers

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float square_root; 
    int i;
    for(i = 1;i <= 9;i++){ 
        square_root = sqrt(i);  
        cout<<endl<<"Square root of number "<<i<<" is "<<square_root;
    }
    
    return 0;
}

