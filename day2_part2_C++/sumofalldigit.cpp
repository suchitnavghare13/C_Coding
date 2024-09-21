// Sum of all digits of number

#include <iostream>
using namespace std;
int main() 
{ 
	int no=1234;
	int sum=0;
	while(no>0)
	{
		int digit=no%10;
		no=no/10;
		sum+=digit;
		cout<<"\nNumber:"<<no<<"\t digit:"<<digit;
	}
	cout<<"\nSum is:"<<sum;
    return 0;
}