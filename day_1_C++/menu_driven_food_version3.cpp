//Menu Drive: 1,2,3/... n options select one and it operates
#include <iostream>
using namespace std;
int main() 
{ 
	int choice;
	float amount=0.0;
	int count_t,count_c,count_w,count_b;
	int order;	
	do
	{
		//menu
		cout<<endl<<"------------------";
		cout<<endl<<"--- APANA TAPRI---";
		cout<<endl<<"------------------";
		cout<<"\nWant to order:1(yes)/0(exit)";
		cin>>order;
		if(order==1)
		{
			cout<<endl<<"1.Tea(10)";
			cout<<endl<<"2.Coffee(40)";
			cout<<endl<<"3.Water(20)";
			cout<<endl<<"4.Bun Maska(100)";
			cout<<endl<<"0.Exit";
			cout<<endl<<"------------------";
			cout<<endl<<"Enter Number of Teas Coffees Water Bun_Masks:\n";
			cin>>count_t>>count_c>>count_w>>count_b;
			cout<<endl<<"------------------------------------";
			cout<<endl<<"---------------Bill----------------";
			cout<<endl<<"------------------------------------";
			if(count_t>0)
				cout<<endl<<"Tea 10.00 INR     Qty:"<<count_t<<"----"<<count_t*10.00;
			if(count_c>0)
				cout<<endl<<"Coffee 40.00 INR     Qty:"<<count_c<<"----"<<count_c*40.00;
			if(count_w>0)
				cout<<endl<<"Water 20.00 INR     Qty:"<<count_w<<"----"<<count_w*20.00;
			if(count_b>0)
				cout<<endl<<"Bun_Maska 100.00 INR     Qty:"<<count_b<<"----"<<count_b*100.00;
			cout<<endl<<"------------------------------------";
			cout<<endl<<"                  Total:"<<(count_t*10.00+count_c*40.00+count_w*20.00+count_b*100.00);			
		}
		else if(order==0)
			{
			 cout<<"\nThanks for visiting";		
			break;
			}
		else
			 cout<<"\nWrong option selected";		
		
	}while(1);//exit option
    return 0;
}