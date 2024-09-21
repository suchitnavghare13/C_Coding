// Print number pyramid pattern

#include <iostream>
using namespace std;
int main() 
{
	for(int space=4,i=1;space>=1 && i<=4;space--,i++)//control line
		{	
            //space print
			for(int s=1;s<=space;s++)
				cout<<" ";
			
	    	//star print
			for(int j=1;j<=i;j++)//print line
			{
				cout<<" X";
			}
			cout<<endl;
		}
     		
    return 0;
} 

