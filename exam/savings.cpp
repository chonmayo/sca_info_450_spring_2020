#include "savings.h"

Savings::Savings() : Account::Account() { }
Savings::Savings(string n, long t_ID, double b) : Account::Account(n, t_ID, b) { }
void Savings::DoWithdrawal(double amount){
    double newbalance = this->GetBalance()-amount;
    if(newbalance >= 0){
        numwithdrawals++;
        this->SetBalance(newbalance);
    }
    else{cout << "Insufficient funds." << endl;}
}
void Savings::display(){
    Account::display();
    string buffer = "===================";
    cout << "SAVINGS ACC DETAILS\n" << buffer << endl;
    printf("Withdrawals: %d\nDeposits: %d\n%s\n", numwithdrawals, numdeposits, buffer.c_str());
}
