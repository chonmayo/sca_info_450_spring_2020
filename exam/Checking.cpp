#include "Account.h"

Checking::Checking() : Account::Account() {  }
Checking::Checking(string n, long t_ID, double b) : Account::Account(n, t_ID, b) { }

int Checking::WriteCheck(int checknum, double amount){
    double newbalance = this->GetBalance()-amount;

    if(newbalance>=0){
        Check c;
        numwithdrawals++;
        this->SetBalance(newbalance);
        
        c.cn = checknum;
        c.a = amount;
        checks.push_back(c);
        return 0;
    }
    return 1;
}

void Checking::display() {
    string buffer = "=====================";
    cout << "CHECKING ACC DETAILS\n" << buffer << endl;
    for (Check c : checks){
        printf("Check number: %d\nCheck amount: $%.2f\n%s\n", c.cn, c.a, buffer.c_str());
    }
}