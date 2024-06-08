// giao d của tổng hàng max và tổng cột min
// 
#include<bits/stdc++.h>
using namespace std;
int m,n;
int vtmax,vtmin;
int main(){
    freopen("yenngua.inp","r",stdin);
    freopen("yenngua.out","w",stdout);
    // nhapinpt
    cin>>m>>n;
    int arr[m][n];
    int crr[2][n];
    int brr[m][2];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j]; 
        }
    }
    // end
    //tim max-min dong
    for (int i=0;i<m;i++){
        vtmax=vtmin=0;
        for (int j=0;j<n;j++){
            if(arr[i][j]>arr[i][vtmax]){vtmax=j;}
            if(arr[i][j]<arr[i][vtmin]){vtmin=j;}
        }
        
        brr[i][0]=arr[i][vtmin];
        brr[i][1]=arr[i][vtmax];
    }
    //tim max-min cot
    for (int j=0;j<n;j++){
        vtmax=vtmin=0;
        for (int i=0;i<m;i++){
            if(arr[i][j]>arr[vtmax][j]){vtmax=i;}
            if(arr[i][j]<arr[vtmin][j]){vtmin=i;}
        }
        
        crr[0][j]=arr[vtmin][j];
        crr[1][j]=arr[vtmax][j];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j]==brr[i][0]==crr[1][j] || arr[i][j]==brr[i][1]==crr[0][j]){
                cout<<arr[i][j];
            }

        }
    }
}          
