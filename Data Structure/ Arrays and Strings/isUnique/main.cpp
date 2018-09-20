#include <iostream>
#include <string>

using namespace std;

// Implement an algorithm to determine if a string has all unique characters.

int main() {

    bool conditionArray[128]; // creating conditionArray boolean array which will work as condition checker.
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(conditionArray[str[i]]){
            cout<<"Not Unique";
            return false;
        }

        conditionArray[str[i]] = true;
    }
    cout<<"Unique";

    return 0;
}