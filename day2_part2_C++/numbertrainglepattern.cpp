// Print number triangle pattern

#include <iostream>
using namespace std;
int main() 
{
	for(int i=1;i<=5;i++)//control line
		{	
			for(int j=1;j<=i;j++)//print line
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
    for(int i= 4 ;i>=1;i--)//control line
		{	
			for(int j=1;j<=i;j++)//print line
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
     		
    return 0;
}