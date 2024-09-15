#include<iostream>
using namespace std;
void swap()
{
	int a,b,temp;
	cout<<"\nEnter the Numbers :";
	cin>>a>>b;
	cout<<a<<"\t"<<b<<endl;
//	temp=a;
//	a=b;
//	b=temp;
//
//a=a+b;
//b=a-b;
//a=a-b;

a = a^b;
b = a^b;
a = a^b;
	cout<<a<<"\t"<<b<<endl;
}
int main()
{
	swap();
	return 0;
}