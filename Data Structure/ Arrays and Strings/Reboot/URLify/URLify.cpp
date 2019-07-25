#include <bits/stdc++.h>
// URLify : Replace all spaces with %20 in the char given a true length
// "lakshay chhabra", 15
// "why are you looking at my code   ", 
using namespace std;
void URLify(char *url, int truelength){
    // remove all the trailing spaces
    url[truelength] = '\0';
    // Now we will deal with inside spaces, first count there occurance
    int i = 0, count = 0;
    while(i!=truelength){
        if(url[i] == ' '){
            count++;
        }
        i++;
    }
    cout<<count;
    // for each space we have to insert 3 characters, so new length will be truelength + 2*count
    int newLength;
    newLength = truelength + 2*count;
    int j = newLength - 1;
    for(int i = (truelength - 1); i>=0; i--){
        if(url[i] == ' '){
            url[j--] = '0';
            url[j--] = '2';
            url[j--] = '%';
        }
        else{
            cout<<url<<"\n";
            url[j--] = url[i];
        }
    }
    cout<<url;
}
int main() {
    char url[200];
    cin.getline(url,100);
    int truelength;
    cin>>truelength;
    URLify(url,truelength);
    return 0;
}
