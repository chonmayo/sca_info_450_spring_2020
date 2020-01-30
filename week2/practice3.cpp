#include <iostream>
#include <math.h>
using namespace std;


bool isLeapYear(int n){
    bool leap = false;
    if(n%4==0) leap = true;
    if(n%100==0) leap = false;
    if(n%400==0) leap = true;
    return leap;
}


int main()
{
 int user_input = 1;
 while(user_input!=0)
 {
     cout << "enter a year [enter 0 to exit]: ";
     cin >> user_input;
     if(user_input==0){
         break;
     }
     if(isLeapYear(user_input)){
         cout << "This is a leap year\n" << endl;
     }
     else{
         cout << "This is NOT a leap year\n" << endl;
     }
 }
return 0;
}

