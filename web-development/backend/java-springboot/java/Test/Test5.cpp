#include<iostream>
#include <iomanip>

using namespace std;
class Bank_Account
{
    public:
        double  AC_no,Balance,withdrow_amt,dep_amount;
    string Name;

    void enter()
    {
        cout << "\nEnter Your account no:-";
        cin >> AC_no;
        cout << "\nEnter your Name:-";
        cin >> Name;
        cout << "\nEnter initial balance: ";
        cin >> Balance;

    }
    void display() 
    {
        cout << fixed << setprecision(0); 
        cout << "\nYour account no: " << AC_no;
        cout << "\nYour Name: " << Name;
        cout << "\nCurrent Balance: " << Balance << "\n";
}


    void deposite()
    {
        cout << "\n\nEnter amount to deposite:-";
        cin >> dep_amount;
        if(dep_amount>0)
        {
            Balance += dep_amount;
            cout << "\nAmount deposited succesfully.\n";
        }
        else
        {
            cout << "\nInvalid deposit amount.\n";
        }
    }
    void withdraw()
    {
        cout<<"\n\nEnter amount to withdraw:-";
        cin >> withdrow_amt;
        if(withdrow_amt>0&&withdrow_amt<=Balance)
        {
            Balance -= withdrow_amt;
            cout << "\nAmount withdraw succesfuly.\n";
        }
        else
        {
            cout << "\nInvalid withdraw amount.\n";
        }
    }
};
int main()
{
    Bank_Account B;
    int choice;
    B.enter();

    do
    {
        cout << "\n\n===Choose any operation===\n";
        cout << "1.Display Account details.\n";
        cout << "2.Depostite Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    
        switch (choice)
        {
            case 1 :
                    B.display();
                break;
            
            case 2 :
                B.deposite();
                break;
            
            case 3 :
                B.withdraw();
                break;

            case 4 : 
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    }
    while (choice != 4);
    return 0;
}
