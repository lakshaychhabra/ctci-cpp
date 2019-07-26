#include <bits/stdc++.h>
// Palindrome Permutation 
// Tact coa -> TRUE (taco cat, atco cta)
using namespace std;
int main() {
    // So it means all words if are even or all are even except one should be accepted 
    // So lets go with hashtables (Cause I love them)
    
    map<char, int> m;
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    int length = s.length();
    for(int i=0; i<length; i++){
        m[s[i]]++;
    } 
    int flag = 0;
    for(auto j = m.begin(); j!=m.end(); j++){
        if(j->first == ' '){
            continue;
        }
        if(j->second % 2 != 0){
            flag ++;
        }
    }
    if(flag == 1 || flag == 0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    cout<<flag;
}
