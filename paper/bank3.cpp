#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    double balance;
    int acc_no;
    static int ACC_generator;

public:
    void createAccount(string name, double amount)
    {
        this->name = name;
        balance = amount;
        acc_no = ++ACC_generator;
        cout << "\nhi " << name << " ,your account number is " << acc_no;
    }

    void depoist(double amount)
    {
        balance = balance + amount;
        balanceCheck();
    }

    void withdraw(double amount)
    {
        if (balance >= 3000)
        {
            balance = balance - amount;
            balanceCheck();
        }
        else
        {
            cout << "\nTransaction not possible ";
        }
    }

    void balanceCheck()
    {
        cout << "\nyour account number is " << acc_no << " on name of " << name << " current balance is " << balance;
    }

    int get_account_no()
    {
        return acc_no;
    }
};

int Account::ACC_generator = 2000;

int main()
{

    int choice, i, index = 0;
    Account Bank[10];
    string name;
    int account_no, receiver_acount_no;

    do
    {
        cout << "\n1.open new account" << endl;
        cout << "2.Depoist in account" << endl;
        cout << "3.Withdraw from account" << endl;
        cout << "4.Balance check" << endl;
        cout << "5.Transfer amount" << endl;
        cout << "0.Exit" << endl;
        cout << ":";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the name ";
            cin >> name;
            while (1)
            {

                float amount;
                cout << "\nEnter the amount >= 3000 to open account ";
                cin >> amount;
                if (amount >= 3000)
                {
                    Account temp;
                    temp.createAccount(name, amount);
                    Bank[index++] = temp;
                    break;
                }
            }
            break;

        case 2:
            int account_no;
            cout << "\nEnter account number ";
            cin >> account_no;

            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {
                    cout << "\nAccount found ";
                    Bank[i].balanceCheck();
                    double deposit_amount;
                    cout << "Enter Amount to depoist ";
                    cin >> deposit_amount;
                    Bank[i].depoist(deposit_amount);
                    break;
                }
            }
            if (i==index)
            {
                cout << "\nAcount number " << account_no << " not found ";
            }
            break;

        case 3:
        
            cout << "Enter amount number ";
            cin >> account_no;
            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {

                    cout << "\nAccout found ";
                    Bank[i].balanceCheck();
                    double withdraw_amount;
                    cout << "\nEnter Amount to windraw ";
                    cin >> withdraw_amount;
                    Bank[i].withdraw(withdraw_amount);
                    break;
                }
            }
            if (i==index)
            {
                cout << "\nAccount number " << account_no << " Not found ";
            }
            break;
        
        case 4:
        cout<<"Enter the account number ";
        cin>>account_no;
        for(i=0;i<index;i++){
            if(account_no=Bank[i].get_account_no()){
                cout<<"Acount found";
                Bank[i].balanceCheck();
                break;
            }
        }
        if(i==index)
        cout<<"Account not found ";
        break;

        case 5:
        cout<<"Service is out of bound for a while please try after some time";
        break;

        case 0:
        cout<<"Thanks for visit ";
        break;

        default:
            cout << "wrong option selected ";
            break;
        }
    } while (choice != 0);

    return 0;
}