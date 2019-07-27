#include <bits/stdc++.h>
using namespace std;
// Zero Matrix
// if element is 0 make entire row and column of MXN matrix 0;
void display(int a[][10], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void makezero(int a[][10], int m, int n){
    // find the element;
    vector<int> row, col;
    int count = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(a[i][j] == 0){
            row.push_back(i);
            col.push_back(j);
            count++;
            }
        }
    }
    // Now we have the indexes where element is 0
    while(count--){
        int row_index = row.back();
        int col_index = col.back();
        // making row zero
        for(int i=0;i<n; i++){
            a[row_index][i] = 0;
        }
         for(int i=0;i<m; i++){
            a[i][col_index] = 0;
        }
        row.pop_back();
        col.pop_back();
    }


}
int main() {
    int a[10][10] = {{1,2,3}, {1,0,3}, {0,1,3}, {1,2,3}};
    int n = 3, m = 4;
    display(a,m,n);
    cout<<"\n";
    makezero(a,m,n);
    display(a,m,n);
}
