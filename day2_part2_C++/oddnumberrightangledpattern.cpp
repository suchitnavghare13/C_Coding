// Print odd number right angle triangle

#include <iostream>
using namespace std;
int main() 
{
    int a = 1;
	for(int i=1;i<=5;i++)//control line
		{	
			for(int j=1;j<=i;j++)//print line
			{
				cout<<a<<"-";
                a=a+2;
			}
			cout<<endl;
		}
     		
    return 0;
} 
