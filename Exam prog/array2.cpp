#include<iostream>
using namespace std;
void Arrayswap()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}

	
}
int main()
{
	Arrayswap();
	return 0;
}