#include<bits/stdc++.h>
using namespace std;
int maxval;
int minval;
int m,n;
int main(){
    int arr[m][n];
    for (int i;i<m;i++){
        for(int j;j<n;j++){
            if (maxval < arr[i][j]){maxval=arr[i][j];}
            if (minval > arr[i][j]){minval=arr[i][j];}
        }
    }
}