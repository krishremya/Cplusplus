#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin>> size;
    int A[size][size], B[size][size], C[size][size];
    for(int i = 0 ;i < size; i++) {
        for(int j =0 ;j < size; j ++) {
            cin>>A[i][j];
        }
    }
    for(int i = 0 ;i < size; i++) {
        for(int j =0 ;j < size; j ++) {
            cin>>B[i][j];
        }
    }
    for(int i = 0 ;i < size; i++) {
        for(int j =0 ;j < size; j ++) {
            C[i][j] = A[i][j]+B[i][j];
        }
    }
    for(int i = 0 ;i < size; i++) {
        for(int j =0 ;j < size; j ++) {
            cout<<C[i][j]<<" ";
         
        }
        cout<<"\n";
    }
    return 0;
}
