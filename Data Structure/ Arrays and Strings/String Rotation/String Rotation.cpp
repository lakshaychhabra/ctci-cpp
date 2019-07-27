#include <bits/stdc++.h>
using namespace std;
// String Rotation: given 2 strings check if s2 is rotation of s1 using only one call to isSubstring
// "waterbottle" is rotation of erbottlewat
int main() {
    // my first approach is to make string rotate 1 by 1 then compare it with s1 if it matches or not
    // shifting string -> O(length of string ^2 ) 
    // space -> O(length of string)
    // comparing string n times-> O(length of string ^ 2)
    // so overall n^2 -> thats bad 

    // 2nd approach Using new string s1s1 which is s1 twice, which surely makes sense that s2 will be its substring
    string s1,s2;
    s1 = "waterbottle";
    s2 = "erbottlewat";
    string s1s1 = "";
    // 
    if(s1.length()==s2.length() && s1.length()>0){
        s1s1 = s1+s1;
    }
    auto found = s1s1.find(s2);
    if(found!= string::npos){
        cout<<"True";
    }
    else{
        cout<<"False";
    }


}
