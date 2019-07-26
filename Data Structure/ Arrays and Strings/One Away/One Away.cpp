#include <bits/stdc++.h>
using namespace std;
// One Away insert a character, remove a character, replace a character
// pale, ple -> true
// pales, pale -> true
// pale, bale -> true
// pale, bake -> false
string check(string s, string m, int l1, int l2){
    int flag = 0;
        int i = 0,j = 0;
        while(i<l1 && j<l2){
            if(s[i] != m[j]){
                flag++;
              }
                i++;
                j++;
            }
            if(flag<2){
                return "YES";
            }
            else{
                return "No";
            }       
}
int main() {
    string s,m;
    cin>>s>>m;
    int l1 = s.length();
    int l2 = m.length();

    int c =  l1 - l2;
    if( c > 1 || c < -1){
        cout<<"False";
        return 0;
    }
    string ans = check(s, m, l1,l2);
    cout<<ans;


}
