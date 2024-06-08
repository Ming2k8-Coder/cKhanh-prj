#include<bits/stdc++.h>
using namespace std;
int n;
int out=0;
int main(){
    freopen("tongcheo.inp","r",stdin);
    freopen("tongcheo.out","w",stdout);
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j]; 
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                out=out+arr[i][j];
            }
        }

    }
    cout<<out;
    
}