// Print reverse of a number

#include <iostream>
using namespace std;
int main() 
{ 
	int no=1234,rno=0;
	int sum=0;
	while(no>0)
	{
		int digit=no%10;//extracts last digit
		no=no/10;//removes last digit
		rno=rno*10+digit;
		cout<<"\nNumber:"<<no<<"\t Reverse No:"<<rno;
	}
	cout<<"\nreverse is:"<<rno;
    return 0;
}