#include <iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        //menu
        cout<<endl<<"------------------";
        cout<<endl<<"--- APANA TAPRI---";
        cout<<endl<<"------------------";
        cout<<endl<<"1.Tea";
        cout<<endl<<"2.Coffee";
        cout<<endl<<"3.Water";
        cout<<endl<<"4.Bun Maska";
        cout<<endl<<"0.Exit";
        cout<<endl<<"------------------";
        cout<<endl<<"order:";
        cin>>choice;//choice
       
        switch(choice)//jump on choice
        {
            case 1:
                    cout<<endl<<"You selected tea";
                    break;
            case 2:
                    cout<<endl<<"You selected coffee";
                    break;
            case 3:
                    cout<<endl<<"You selected Water";
                    break;
            case 4:
                    cout<<endl<<"You selected Bun Maska";
                    break;        
            case 0:
                    cout<<endl<<"Exiting... Thanks visit again";
                    break;        
            default://error trapping
                    cout<<endl<<"Please selc from available options";
                    break;        
        }
    }while(choice!=0);//exit option
    return 0;
}