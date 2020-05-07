#include <iostream>
#include <string>
#include <regex>
#include <vector>
using namespace std;

#pragma once

struct Check {
    int cn; 
    double a;
};

struct Charge {
    string n; 
    double a;
};


class Account{
    private:
        string name;
        long taxID;
        double balance;
    protected:
        int numdeposits;
        int numwithdrawals;

    //move the getters and setters outside of this .h file
    public:
        //default constructor
        Account();
        Account(string n, long t_ID, double b);
        void SetName(string s);
        void SetTaxID(long t_ID);
        void SetBalance(double b);
        string GetName();
        long GetTaxID();
        double GetBalance();
        void MakeDeposit(double amount);
        void display();
};