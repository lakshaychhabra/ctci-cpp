#include <iostream>
using namespace std;

bool replaced(string first, string second){
    bool foundDifference = false;
    for(int i = 0; i<first.length(); i++){
        if(first[i] != second[i]){
            //first time we want to see a difference
            if(foundDifference){
                return false;
            }
            //we don't want more difference so we will make it true
            foundDifference = true;
        }
    }
    return true;
}

bool increased(string str1,string str2){

    int i=0,j=0;


    while(i<str1.length() && j<str2.length()) {
     if(str1[i] != str2[j]){
         if(i!=j){
             return false;
         }
         if(str1.length()>str2.length()){
           i++;
         }else{
             j++;
         }

     }
        else{
         i++;
         j++;
     }

    }
    return true;
}

bool oneEditAway(string str1, string str2){
    if(str1.length() == str2.length()){
        return replaced(str1,str2);
    }
    else if(str1.length() + 1 == str2.length()){
        return increased(str1,str2);
    }
    else if(str1.length() - 1 == str2.length()){
        return increased(str1,str2);
    }
    return false;
}




int main() {

    string a = "apple", b = "aple";
    bool val;
    val = oneEditAway(a,b);
    if(val){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}