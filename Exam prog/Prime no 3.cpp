#include<iostream>
using namespace std;
void primeno(int n)
{	
	int count=0;
	int i; 
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}		
	if(count==2)
			cout<<"\n The number is Prime";
		else 
			cout<<"\n The number is not Prime";
}
int main()
{
   int no;
   cout<<"\n Enter the Number"<<endl;
   cin>>no;
   primeno(no);
}