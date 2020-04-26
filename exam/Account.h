/*project ideas:
        sanatize user input with regex
        use try catch
        store information in a text file
        account credentials
*/
#include <iostream>
#include <string>
#include <regex>
#include <vector>
using namespace std;

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
        int SetName(string s);
        int SetTaxID(long t_ID);
        int SetBalance(double b);
        string GetName();
        long GetTaxID();
        double GetBalance();
        void MakeDeposit(double amount);
        void display();
};

class Checking : public Account {
     private:
        vector<Check> checks;
     public:
        Checking();
        Checking(string name, long t_ID, double balance);
        int WriteCheck(int checknum, double amount);
        void display();
};

class Savings : public Account {
     public:
        Savings();
        Savings(string name, long t_ID, double balance);
        int DoWithdrawal(double amount);
        void display();
};

class CreditCard : public Account {
    private:
        long card_number;
        vector<Charge> charges;
    public:
        CreditCard();
        CreditCard(string name, long t_ID, double balance);
        int DoCharge(string name, double amount);
        int MakePayment(double amount);
        void display();
};