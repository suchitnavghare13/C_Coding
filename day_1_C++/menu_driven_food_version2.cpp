#include <iostream>
using namespace std;
int main()
{
    int choice;
    float amount=0.0;
    int count_t,count_c,count_w,count_b;
    count_t=count_c=count_w=count_b=0;
    do
    {
        //menu
        cout<<endl<<"------------------";
        cout<<endl<<"--- APANA TAPRI---";
        cout<<endl<<"------------------";
        cout<<endl<<"1.Tea(10)";
        cout<<endl<<"2.Coffee(40)";
        cout<<endl<<"3.Water(20)";
        cout<<endl<<"4.Bun Maska(100)";
        cout<<endl<<"0.Exit";
        cout<<endl<<"------------------";
        cout<<endl<<"order:";
        cin>>choice;//choice
       
        switch(choice)//jump on choice
        {
            case 1:
                    cout<<endl<<"You selected tea";
                    count_t++;
                    break;
            case 2:
                    cout<<endl<<"You selected coffee";
                    count_c++;
                    break;
            case 3:
                    cout<<endl<<"You selected Water";
                    count_w++;
                    break;
            case 4:
                    cout<<endl<<"You selected Bun Maska";
                    count_b++;
                    break;        
            case 0:
                    cout<<endl<<"Exiting... Thanks visit again";
                    cout<<"Total Business for the day\n";
                    cout<<endl<<"------------------------------------";
                    cout<<endl<<"---------------Total----------------";
                    cout<<endl<<"------------------------------------";
                    cout<<endl<<"Tea     "<<count_t<<"           "<<count_t*10.00;
                    cout<<endl<<"Coffee  "<<count_c<<"           "<<count_c*40.00;
                    cout<<endl<<"Water   "<<count_w<<"           "<<count_w*20.00;
                    cout<<endl<<"Bun Mask"<<count_b<<"           "<<count_b*100.00;
                    cout<<endl<<"------------------------------------";
                    cout<<endl<<"                  Total:"<<(count_t*10.00+count_c*40.00+count_w*20.00+count_b*100.00);            
                    break;        
            default://error trapping
                    cout<<endl<<"Please selc from available options";
                    break;        
        }
    }while(choice!=0);//exit option
    return 0;
}