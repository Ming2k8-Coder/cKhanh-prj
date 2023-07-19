#include<bits/stdc++.h>
using namespace std;
string st;
int main(){
    int dem=0;
    cout<<"Nhập String:";
    cin>>st;
    for (int i=0;i<st.length();i++)
        if(st[i]>='0' && st[i]<='9'){
            dem++;
        }
    cout<<"Số chữ số:"<<dem;
}