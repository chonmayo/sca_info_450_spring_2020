#include "account.h"
using namespace std;

class CreditCard : public Account {
    private:
        long card_number;
        vector<Charge> charges;
    public:
        CreditCard();
        CreditCard(string name, long t_ID, double balance);
        void DoCharge(string name, double amount);
        void MakePayment(double amount);
        void display();
};