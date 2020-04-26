#include "Account.h"

CreditCard::CreditCard() : Account::Account() { }
CreditCard::CreditCard(string n, long t_ID, double b) : Account::Account(n, t_ID, b) { }

int CreditCard::DoCharge(string name, double amount) {
    int newbalance = this->GetBalance()-amount;
    Charge c;
    numwithdrawals++;
    this->SetBalance(newbalance);
    
    c.n = name;
    c.a = amount;
    charges.push_back(c);
    return 0;
}

int CreditCard::MakePayment(double amount){
    if(amount>0){
        this->SetBalance(this->GetBalance()+amount);
        numdeposits++;
        return 0;
    }
    return 1;
}

void CreditCard::display(){
    string buffer = "=======================";
    cout << "CREDITCARD ACC DETAILS\n" << buffer << endl;
    for(Charge c : charges){
        printf("Charge name: %s\nCharge amount: %.2f\n%s\n", c.n.c_str(), c.a, buffer.c_str());
    }
}   