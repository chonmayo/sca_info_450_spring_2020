#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;


int main(){
    ofstream myFile("randoms.txt");
    int i = 0;
    do{
        myFile << (rand() % 20000 - 10000) << endl;
        i++;
    }
    while(i<1000);
    myFile.close();
    system("wc -l randoms.txt");
}
