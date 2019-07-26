// 1.1 IS UNIQUE : If a string has all unique characters.
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    bool a[128] = {false};
    int i = 0;
    while(s[i]!='\0'){
        if(!a[s[i]]){
            a[s[i]] = true;
        }
        else{
            cout<<"Not Unique";
            return 0;
        }
        i++;
    }
    cout<<"IS UNIQUE";

}

// Test cases :
// Lakshay : Not Unique
// laksy   : IS UNIQUE