// Print right angle triangle pattern

#include <iostream>
using namespace std;
int main() 
{
	for(int i=1;i<=5;i++)//control line
		{	
			for(int j=1;j<=i;j++)//print line
			{
				cout<<"X ";
			}
			cout<<endl;
		}
     		
    return 0;
} 