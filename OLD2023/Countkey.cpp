#include<bits/stdc++.h>
using namespace std;
string st;
int main(){
    cout<<"Nhập String:";
    getline(cin,st);
    int a=0;
    for (int i = 0;i<st.size();i++){
        if(st[i] =='a'){
            cout<<st[i];
            a++;
        }
    }
    cout<<"Số chữ a:"<<a;
}