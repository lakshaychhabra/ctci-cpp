#include <iostream>
// Rotate Matrix : by 90*
using namespace std;
void rotate(int n, int a[][10]){
        for(int i=0;i<n/2;i++){
        for(int j=i;j<n-1-i;j++){
            int temp = a[i][j];
            a[i][j] = a[j][n-1-i];
            a[j][n-1-i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[n-1-j][i];
            a[n-1-j][i] = temp;
        }
    }
}
int main() {
    int a[10][10] = {{1,2,3},{1,2,3}, {1,2,3}};
    int n=3;
    rotate(n,a);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
