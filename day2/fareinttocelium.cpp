// Fahrenheit to Celsius conversion:

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    float f;
    cout<<"Enter temp in Fahrenheit : \n";
    cin>>f;

    cout << "\nTemp in Celsius is :"<< (f-32)* 5.0/9.0;
    return 0;
    
}
