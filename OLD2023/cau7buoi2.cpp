#include<bits/stdc++.h>
using namespace std;
string st;
int main(){
    int dem=1;
    cout<<"Nhập String:";
    cin>>st;
    bool ok=false;
    for (int i=1;i<st.size();i++){
        ok=true;
        for (int j=0;j<i;j++){
            if (st[i] == st[j]){
                ok=false;
                break;
            }
        }
        if (ok){
        dem++;
        }
    }
    cout<<"Số kí tự != nhau:"<<dem;
}