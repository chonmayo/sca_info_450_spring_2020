#include "account.h"

Account::Account() {
    this->name = "DEFAULT_ACC";
    this->taxID = 0;
    this->balance = 0;
    this->numwithdrawals = 0;
    this->numdeposits = 0;
}
Account::Account(string n, long t_ID, double b){
    this->name = n;
    this->taxID = t_ID;
    this->balance = b;
    this->numwithdrawals = 0;
    this->numdeposits = 0;
}
void Account::SetName(string s){
    regex NAME("^[A-Za-z]+\\ [A-Za-z]+");
    if(regex_match(s,NAME)){
        this->name = s;
    }
    else{cout << "Please enter name as: {FirstName} {LastName}" << endl;}
}
void Account::SetTaxID(long t_ID){
    regex SSN("\\d{9}");
    string in = to_string(t_ID);
    if(regex_match(in, SSN)){
        this->taxID = t_ID;
    }
    else{cout << "Enter valid 9 digit SSN." << endl;}
}
void Account::SetBalance(double b){
    this->balance = b;
}
string Account::GetName(){
    return this->name;
}
long Account::GetTaxID(){
    return this->taxID;
}
double Account::GetBalance(){
    return this->balance;
}
void Account::MakeDeposit(double amount){
    if(amount > 0){
        this->balance += amount;
        numdeposits++;
    }
}
void Account::display(){
    printf("NAME: %s  |  TID: %ld  |  BAL: $%.2f\n", this->name.c_str(), this->taxID, this->balance);
}