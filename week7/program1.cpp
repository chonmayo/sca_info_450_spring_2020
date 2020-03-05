#include   <iostream>  
#include   <cstring>  
using namespace std;

string reverse(string *s1);

int main(){
    string s;
    cout << "Enter string to reverse: ";
    getline(cin, s);
    while(s.length()>0){
        string out = reverse(&s);
        cout << out << endl;
        cout << "Enter string to reverse: ";
        getline(cin, s);
    }
    return 1;
}

string reverse(string *s1){
    int len = s1->length();
    char a = 0;
    char b = 0;
    char temp = 0;
    for(int i=0;i<len/2;i++){
        temp = s1->at(i);
        s1->at(i) = s1->at(len-i-1);
        s1->at(len-i-1) = temp;
    }
    return *s1;
}