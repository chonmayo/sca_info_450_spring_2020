#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
    //testing();

    string usermenu = "1. Savings Deposit\n2. Savings withdrawal\n3. Checking Deposit\n4. Write A Check\n5. Credit Card Payment\n6. Make A Charge\n7. Display Savings\n8. Display Checking\n9. Display Credit Card\n0. Exit ";
    cout << "WELCOME TO A BANK" << endl;

    Savings s;
    s.SetBalance(100);
    Checking ch;
    ch.SetBalance(100);
    CreditCard cc;
    cc.SetBalance(100);

    int userinput = -1;
    while(true){
        printf("Checking balance: $%.2f Savings balance: $%.2f Credit Card balance: $%.2f\n", ch.GetBalance(), s.GetBalance(), cc.GetBalance());
    
        cout << usermenu << "\nSelect option: ";
        cin >> userinput;

        string name;
        int checknum;
        double amount;

        switch(userinput) {
            case 1: 
                cout << "Enter savings deposit amount: " , cin >> amount;
                s.MakeDeposit(amount);
                break;
            case 2:
                cout << "Enter savings withdrawal amount: " , cin >> amount;
                s.DoWithdrawal(amount);
                break;
            case 3:
                cout << "Enter checking deposit amount: " , cin >> amount;
                ch.MakeDeposit(amount);
                break;
            case 4:
                cout << "Enter check number: " , cin >> checknum;
                cout << "Enter check amount: " , cin >> amount;
                ch.WriteCheck(checknum, amount);
                break;
            case 5:
                cout << "Enter credit card payment amount: " , cin >> amount;
                cc.MakePayment(amount);
                break;
            case 6:
                cout << "Enter credit card charge name: " ;
                cin.ignore();
                getline(cin, name);
                cout << "Enter credit card charge amount: " , cin >> amount;
                cc.DoCharge(name, amount);
                break;
            case 7:
                s.display();
                break;
            case 8:
                ch.display();
                break;
            case 9:
                cc.display();
                break;
            case 0:
                break;
            default:
                cout << "ENTER ANOTHER NUMBER >:(" << endl;
        } 
        userinput = -1;
    }
    
    
} 

void testing(){
    Account a1;
    a1.SetName("Shawn Armao");
    a1.SetTaxID(123556789);
    a1.SetBalance(100);
    a1.MakeDeposit(50);
    a1.display();

    Account a2("Soad Elizny", 123906969, 100);
    a2.display();

    Checking c1;
    c1.WriteCheck(1, 1234);
    c1.SetBalance(90);
    c1.WriteCheck(2, 10);
    c1.display();

    Checking c2("Shawn Armao", 123556789, 100);
    c2.WriteCheck(1,100);
    c2.display();

    Savings s1;
    s1.SetBalance(100);
    s1.DoWithdrawal(100);
    s1.display();

    Savings s2("Shawn Armao", 123556789, 100);
    s2.DoWithdrawal(101);
    s2.display();

    CreditCard cc1;
    cc1.DoCharge("amazon",100);
    cc1.MakePayment(200);
    cc1.display();
}
