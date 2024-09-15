// 15. Print inverted right angle triangle

#include <iostream>
using namespace std;
int main() 
{
	for(int space=0,i=5;space<=5 && i>=1;space++,i--)//control line
		{	
            //space print
			for(int s=1;s<=space;s++)
				cout<<" ";
			
	    	//star print
			for(int j=1;j<=i;j++)//print line
			{
				cout<<j;
			} 
			cout<<endl;
		}
     		
    return 0;
} 
