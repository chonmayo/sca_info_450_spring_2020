#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 uint user_input = 1;
 while(user_input!=0)
 {
     cout << "enter a positive number [enter 0 to exit]: ";
     cin >> user_input;
     if(user_input==0){
         break;
     }
     cout << user_input << " squared = " << pow(user_input,2) << endl;
 }
return 0;
}