#include "creditcard.h"

CreditCard::CreditCard() : Account::Account() { }
CreditCard::CreditCard(string n, long t_ID, double b) : Account::Account(n, t_ID, b) { }

void CreditCard::DoCharge(string name, double amount) {
    int newbalance = this->GetBalance()-amount;
    Charge c;
    numwithdrawals++;
    this->SetBalance(newbalance);
    
    c.n = name;
    c.a = amount;
    charges.push_back(c);
}

void CreditCard::MakePayment(double amount){
    if(amount>0){
        this->SetBalance(this->GetBalance()+amount);
        numdeposits++;
    }
    else{cout << "Insufficient funds." << endl;}
}

void CreditCard::display(){
    Account::display();
    string buffer = "=======================";
    cout << "CREDITCARD ACC DETAILS\n" << buffer << endl;
    for(Charge c : charges){
        printf("Charge name: %s\nCharge amount: %.2f\n%s\n", c.n.c_str(), c.a, buffer.c_str());
    }
}   