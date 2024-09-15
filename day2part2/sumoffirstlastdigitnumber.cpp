// Sum of first & last digit of number

#include <iostream>
using namespace std;
int main() 
{ 
	int no=1234;
	int sum=0;
    int i=no%10;
	while(no>10)
	{
		no=no/10;
	}
    sum = no + i;
	cout<<"\nSum of first & last digit of number is: "<<sum;
    return 0;
}