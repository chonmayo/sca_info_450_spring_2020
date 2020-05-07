#include "account.h"
using namespace std;

class Savings : public Account {
     public:
        Savings();
        Savings(string name, long t_ID, double balance);
        void DoWithdrawal(double amount);
        void display();
};