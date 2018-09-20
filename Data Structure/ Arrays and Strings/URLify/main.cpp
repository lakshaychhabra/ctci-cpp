#include <iostream>

using namespace std;

//URLify :-
//A method to replace all the spaces in a string with %20
//Also provided with true length of the string.

string URLify(string str, int length){
    int i,index;
    string string1;
    int numOfSpaces = 0;
    for(i=0;i<length;i++){
        if(str[i] == ' '){
            numOfSpaces++;
        }
    }

    str[length] = '/0'; //discarding spaces in last
    index = length + 2*numOfSpaces; //to replace a space we need 3 space for %20

    for(i = length-1; i>=0; i--){

        if(str[i] == ' '){

            str[index -1 ] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
         index -= 3;
        }
        else{
            str[index-1] = str[i];
            index--;
        }

    }



    return str;
}

int main() {

    string url;
    int trueLength;
    getline(cin,url);
    cin>>trueLength;

    cout<<URLify(url, trueLength);
    return 0;
}