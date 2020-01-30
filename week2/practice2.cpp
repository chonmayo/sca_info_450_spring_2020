#include <iostream>
#include <math.h>
using namespace std;

//need fix if n is not divisible by 2, it is not divisible by multiples of 2....I only need to check if n % known primes
bool isPrime(int n)
{
    if (n<=3) return true; 

    int k = 2;
    int upper_bound = n;
    while(k<=upper_bound){
        if(n % k == 0){
            return false;
        }
        upper_bound = n/k;
        k++;
    }
    return true;
}

int main()
{
    int user_input = 1;
    while(user_input!=0)
    {
        cout << "enter a number: ";
        cin >> user_input;
        if(user_input==0){
            break;
        }
        isPrime(user_input) ? cout << user_input << " is prime.\n" : cout << user_input << " is NOT prime.\n";
    }
    cout << "Bye." << endl;
    return 0;
}
