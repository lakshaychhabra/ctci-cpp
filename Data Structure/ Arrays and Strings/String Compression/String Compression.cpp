#include <bits/stdc++.h>
using namespace std;
// String Compression aabcccccaaa -> a2b1c5a3
void compress(string s){
    string q = "";
    q = s[0];
    int i = 0;
    int buffer = 1;
    int length = s.length();
    int flag = 0;
    string j;
    while(i<length){
        if(s[i] == s[i+1]){
            buffer += 1;
        }
        if(s[i] != s[i+1]){
            flag = 1;
        }
        if(flag){
            j = to_string(buffer);
            q+=j;
            flag = 0;
            buffer = 1;
            q+=s[i+1]; 
        }
        i++;
    }
    cout<<q;
}
int main() {
    string s;
    cin>>s;
    compress(s);
}
