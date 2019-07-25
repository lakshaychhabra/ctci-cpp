#include <bits/stdc++.h>
// Check Permutation : Given 2 Strings Write a method to decide if one is permutation of the other
// Test Cases :
// lakshay yashkal : Are Permutation
// lakshay yashkaa : NO Permutation
using namespace std;
int main() {
    
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"No Permuatation";
        return 0;
    }
    // Approach 1 : Sorting the array
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1.compare(s2) == 0){
        cout<<"Are Permutation";
    }
    else{
        cout<<"No Permutation";
    }
    // Approach 2 : comparing counts of the string elements
    int a[128] = {0};
    string s3,s4;
    cin>>s3>>s4;
     if(s3.length()!=s4.length()){
        cout<<"No Permuatation";
        return 0;
    }
    cout<<"\n";
    int i = 0;
    while(s3[i] != '\0'){
        a[s3[i]]++;
        i++;
    }
    i = 0;
    while(s4[i] != '\0'){
        a[s4[i]]--;
        i++;
    }

    for(i = 0; i<128; i++){
        if(a[i]!=0){
            cout<<"No permutation";
            return 0;
        }
    }
    cout<<"Are Permutation";
    
}
