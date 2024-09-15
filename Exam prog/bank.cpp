#include<iostream>
using namespace std;
class Account
{
  //data member
 private:
    string name;
    int acc_no;
    double balance;
    static int ACC_generator;
   
 //function member
 public:
     
    void create_account(string name,double amount)
        {
            this->name=name;
            balance=amount;
            acc_no=++ACC_generator;
            cout<<"\nHi "<<name<<" ,You Account number is:"<<acc_no;
        }
   
    void deposit(double amount)
        {
            balance=balance+amount;
            balance_check();
        }
    void withdraw(double amount)
        {
            if((balance-amount)>=3000)
                {
                    balance=balance-amount;
                    balance_check();
                }
            else
                cout<<"\nTransection can not be done: Minimum Balance Reached";
        }
       
    void balance_check()
    {
        cout<<"\nYour account "<<acc_no<<" on name of "<<name<<" current balance is "<<balance<<".";
    }
    int get_account_no()//vibhishan:gives private data out of class
    {
        return acc_no;
    }
    bool transfer(Account receiver, double amount) // Pass by value
    {
        if (amount <= 0)
        {
            cout << "\nTransfer amount must be greater than zero.";
            return false;
        }
        if ((balance - amount) < 3000)
        {
            cout << "\nInsufficient funds for transfer.";
            return false;
        }
        balance -= amount;
        receiver.deposit(amount);
        cout << "\nTransferred " << amount << " to account " << receiver.get_account_no();
        return true;
    }
};


//must be created /init outside class also
//accessed using scope resolution ::
int Account::ACC_generator=202400;
int main()
{
   
 Account Bank[10];
 int choice,index=0,i;
 string name;
 int account_no;

 
 do
 {
	cout<<endl<<"-----------------------==-------";
	cout<<endl<<"--------Mat Lena Bank-----------";
	cout<<endl<<"================================";
	cout<<endl<<"-----1.Open New Account---------";
	cout<<endl<<"-----2.Deposit To Account-------";
    cout<<endl<<"-----3.Withdraw From Account----";
    cout<<endl<<"-----4.Check Account Balance----";
    cout<<endl<<"-----5.Transfer Money-----------";
    cout<<endl<<"-----0.Exit---------------------";
    cout<<endl<<"--------------------------------";
    cout<<endl<<":";
    cin>>choice;
    switch(choice)
    {
        case 1:
       
            cout<<"\nEnter name:";
            cin>>name;
            while(1)
            {
             float amount;
             cout<<"\nEnter Amount >=3000 to open account:";
             cin>>amount;
             if(amount>=3000)
             {
                 Account temp;
                temp.create_account(name,amount);//created account
                Bank[index++]=temp;//Bank[i]=temp; i=i+1;
                break;
             }
            }
        break;
        case 2:
                int account_no;
                cout<<"\nEnter account number:";
                cin>>account_no;
                for(i=0;i<index;i++)
                {
                    if(account_no==Bank[i].get_account_no())
                    {
                        cout<<"\nAccount Found";
                        Bank[i].balance_check();
                        double deposit_amount;
                        cout<<"\nEnter amount to deposit:";
                        cin>>deposit_amount;
                        Bank[i].deposit(deposit_amount);
                        break;
                    }
                }
                if(i==index)//not found while searching
                    cout<<"\nAccount number "<<account_no<<" not found.";
                break;
            case 3:
           
                cout<<"\nEnter account number:";
                cin>>account_no;
                for(i=0;i<index;i++)
                {
                    if(account_no==Bank[i].get_account_no())
                    {
                        cout<<"\nAccount Found";
                        Bank[i].balance_check();
                        double withdraw_amount;
                        cout<<"\nEnter amount to withdraw:";
                        cin>>withdraw_amount;
                        Bank[i].withdraw(withdraw_amount);
                        break;
                    }
                }
                if(i==index)//not found while searching
                    cout<<"\nAccount number "<<account_no<<" not found.";
                break;
            case 4:
           
                cout<<"\nEnter account number:";
                cin>>account_no;
                for(i=0;i<index;i++)
                {
                    if(account_no==Bank[i].get_account_no())
                    {
                        cout<<"\nAccount Found";
                        Bank[i].balance_check();
                        break;
                    }
                }
                if(i==index)//not found while searching
                    cout<<"\nAccount number "<<account_no<<" not found.";
                break;
            case 5:
            int sender_no, receiver_no;
            double transfer_amount;
            cout << "\nEnter sender account number:";
            cin >> sender_no;
            for (i = 0; i < index; i++)
            {
                if (sender_no == Bank[i].get_account_no())
                {
                    Account sender = Bank[i];
                    cout << "\nSender Account Found";
                    sender.balance_check();
                    cout << "\nEnter receiver account number:";
                    cin >> receiver_no;
                    int j; // Declare j outside the loop
                    for (j = 0; j < index; j++)
                    {
                        if (receiver_no == Bank[j].get_account_no() && receiver_no != sender_no)
                        {
                            Account receiver = Bank[j];
                            cout << "\nReceiver Account Found";
                            receiver.balance_check();
                            cout << "\nEnter amount to transfer:";
                            cin >> transfer_amount;
                            if (sender.transfer(receiver, transfer_amount))
                            {
                                cout << "\nTransfer completed successfully.";
                                // Update the bank records
                                Bank[i] = sender;  // Update the sender account
                                Bank[j] = receiver; // Update the receiver account
                            }
                            break;
                        }
                    }
                    if (j == index)
                        cout << "\nReceiver account number " << receiver_no << " not found.";
                    break;
                }
            }
            if (i == index)
                cout << "\nSender account number " << sender_no << " not found.";
            break;
            case 0:
                    cout<<"\nThanks for Banking with us ...";
                    break;
            default:
                cout<<"\nWrong option selected..";
                break;                
    }
     
 }while(choice!=0);
 
 return 0;

}