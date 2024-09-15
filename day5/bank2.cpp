#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    int acc_no;
    double balance;
    static int ACC_generator;

public:
    void create_account(string name, double amount)
    {
        this->name = name;
        balance = amount;
        acc_no = ++ACC_generator;
        cout << "\nHi " << name << ", Your Account number is:" << acc_no;
    }

    void deposit(double amount)
    {
        balance += amount;
        balance_check();
    }

    void withdraw(double amount)
    {
        if ((balance - amount) >= 3000)
        {
            balance -= amount;
            balance_check();
        }
        else
        {
            cout << "\nTransaction cannot be done: Minimum Balance Reached";
        }
    }

    bool transfer(Account &receiver, double amount)
    {
        if (balance - amount >= 3000)
        {
            balance -= amount;
            receiver.deposit(amount);
            cout << "\nTransferred Rs." << amount << " to account number " << receiver.get_account_no() << endl;
            return true;
        }
        else
        {
            cout << "\nInsufficient funds for transfer." << endl;
            return false;
        }
    }

    void balance_check()
    {
        cout << "\nYour account " << acc_no << " on name of " << name << " current balance is " << balance << "." << endl;
    }

    int get_account_no() const
    { // Made get_account_no const to prevent accidental modification
        return acc_no;
    }
};

// must be created outside class also
// accessed using scope resolution ::
int Account::ACC_generator = 202400;

int main()
{
    Account Bank[10];
    int choice, index = 0, i;
    string name;
    int account_no, receiver_account_no;

    do
    {
        cout << endl
             << "-------------------" << endl
             << "-----Lena Bank-----" << endl
             << "-------------------" << endl
             << "1. Open New Account" << endl
             << "2. Deposit To Account" << endl
             << "3. Withdraw From Account" << endl
             << "4. Check Account Balance" << endl
             << "5. Transfer Funds" << endl // Added new option
             << "0. Exit" << endl
             << "-------------------" << endl
             << ":";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter name:";
            cin >> name;
            while (1)
            {
                float amount;
                cout << "\nEnter Amount >=3000 to open account:";
                cin >> amount;
                if (amount >= 3000)
                {
                    Account temp;
                    temp.create_account(name, amount); // created account
                    Bank[index++] = temp;              // Bank[i]=temp; i=i+1;
                    break;
                }
            }
            break;
        case 2:
            cout << "\nEnter account number:";
            cin >> account_no;
            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {
                    cout << "\nAccount Found";
                    Bank[i].balance_check();
                    double deposit_amount;
                    cout << "\nEnter amount to deposit:";
                    cin >> deposit_amount;
                    Bank[i].deposit(deposit_amount);
                    break;
                }
            }
            if (i == index) // not found while searching
                cout << "\nAccount number " << account_no << " not found.";
            break;
        case 3:
            cout << "\nEnter account number:";
            cin >> account_no;
            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {
                    cout << "\nAccount Found";
                    Bank[i].balance_check();
                    double withdraw_amount;
                    cout << "\nEnter amount to withdraw:";
                    cin >> withdraw_amount;
                    Bank[i].withdraw(withdraw_amount);
                    break;
                }
            }
            if (i == index) // not found while searching
                cout << "\nAccount number " << account_no << " not found.";
            break;
        case 4:
            cout << "\nEnter account number:";
            cin >> account_no;
            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {
                    cout << "\nAccount Found";
                    Bank[i].balance_check();
                    break;
                }
            }
            if (i == index) // not found while searching
                cout << "\nAccount number " << account_no << " not found.";
            break;
        case 5: // Transfer funds
            cout << "\nEnter sender account number:";
            cin >> account_no;
            for (i = 0; i < index; i++)
            {
                if (account_no == Bank[i].get_account_no())
                {
                    cout << "\nSender account found";
                    Bank[i].balance_check();
                    cout << "\nEnter receiver account number:";
                    cin >> receiver_account_no;
                    int j; // Declare j outside the inner loop
                    for (j = 0; j < index; j++)
                    {
                        if (receiver_account_no == Bank[j].get_account_no())
                        {
                            cout << "\nReceiver account found";
                            Bank[j].balance_check();
                            double transfer_amount;
                            cout << "\nEnter amount to transfer:";
                            cin >> transfer_amount;
                            if (Bank[i].transfer(Bank[j], transfer_amount))
                            {
                                cout << "\nTransfer successful.";
                            }
                            else
                            {
                                cout << "\nTransfer failed.";
                            }
                            break;
                        }
                    }
                    if (j == index)
                    {
                        cout << "\nReceiver account not found.";
                    }
                    break;
                }
            }
            if (i == index)
            {
                cout << "\nSender account not found.";
            }
            break;
        case 0:
            cout << "\nThanks for Banking with us ...";
            break;
        default:
            cout << "\nWrong option selected..";
            break;
        }
    } while (choice != 0);

    return 0;
}