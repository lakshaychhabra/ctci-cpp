#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//Check Permutation:-
//Given two strings, write a method to decide if one is a
//permutation of the other.

int main() {

    string str1, str2;
    int length1, length2;
    cin>>str1>>str2;

    length1 = str1.length();
    length2 = str2.length();


    if(length1 != length2) {
        cout<<"No";
        return false;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i = 0; i<length1; i++){
        if(str1[i] != str2[i]){
            cout<<"No Permutation";
            return false;
        }

    }
    cout<<"It is a Permutation";
    return 0;


}