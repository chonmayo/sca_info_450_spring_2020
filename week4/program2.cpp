#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

const int ARR_COL = 3;
const int ARR_ROW = 10;

int main()
{
    string names[ARR_ROW][ARR_COL];
    string name = "NAME";
    bool flag = false;
    for(int row=0;row<ARR_ROW;row++){
        for(int col=0;col<ARR_COL;col++){
            printf("Enter name: ");
            getline(cin,name);
            if(name==""){
                flag = true;
                break;
            }
            names[row][col] = name;
        }
        if(flag){break;}
    }
    for(int row=0;row<ARR_ROW;row++){
        for(int col=0;col<ARR_COL;col++){
            if(names[row][col]!=""){
                cout << "Name: " << names[row][col] << endl;
            }
        }
    }

    return 1;
}