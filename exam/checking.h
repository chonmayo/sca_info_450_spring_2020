#include "account.h"
using namespace std;

class Checking : public Account {
     private:
        vector<Check> checks;
     public:
        Checking();
        Checking(string name, long t_ID, double balance);
        void WriteCheck(int checknum, double amount);
        void display();
};