#include<bits/stdc++.h>//dem so nguyen to trong 1 mang m n
using namespace std;
int main(){
    int a,b,c,m,n;
    a=0;
    b=0;
    freopen("mangnguyento.inp","r",stdin);
    freopen("mangnguyento.out","w",stdout);
    cin>>m>>n;
    // inp
    int array[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>array[m][n];
            for (int k=2;k*k <= array[i][j];k++){
                if(array[i][j]%k==0){
                a++;}
            }
        if (a==0&&array[i][j]>1){
            b++;
            a=0;
        }
    }}
    cout<<b<<endl;
    return 0;
}