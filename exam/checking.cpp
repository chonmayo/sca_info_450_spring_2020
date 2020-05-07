#include "checking.h"

Checking::Checking() : Account::Account() {  }
Checking::Checking(string n, long t_ID, double b) : Account::Account(n, t_ID, b) { }

void Checking::WriteCheck(int checknum, double amount){
    double newbalance = this->GetBalance()-amount;

    if(newbalance>=0){
        Check c;
        numwithdrawals++;
        this->SetBalance(newbalance);
        
        c.cn = checknum;
        c.a = amount;
        checks.push_back(c);
    }
    else{cout << "Insufficient funds." << endl;}
}

void Checking::display() {
    Account::display();
    string buffer = "=====================";
    cout << "CHECKING ACC DETAILS\n" << buffer << endl;
    for (Check c : checks){
        printf("Check number: %d\nCheck amount: $%.2f\n%s\n", c.cn, c.a, buffer.c_str());
    }
}