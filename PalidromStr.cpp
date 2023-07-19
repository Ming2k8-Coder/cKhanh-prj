#include<bits/stdc++.h>
using namespace std;
string st;
int main(){
    cout<<"Nhập String:";
    cin>>st;
    int r2l = 0;
    int l2r = st.length() - 1;
    while(l2r>r2l){
        if (st[l2r--] != st[r2l++]){
            cout<<"STR isn't pldr"<<endl;
            return 0;
            break;
        } 
    }
    cout<<"STR is palidrom";
    return 0;
}