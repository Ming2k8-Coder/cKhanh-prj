#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    int dem=0;
    cout<<"Nhập String:";
    cin>>st;
    for (int i=0;i<st.size();i++){
        if(st[i] == '('){
            dem++;
        }
        if(st[i] == ')'){
            dem--;
        }
    }
    if (dem == 0){
        cout<<"Ngoặc đúng";
        return 0;
    }else{
        cout<<"Ngoặc sai";
        return 0;
    }
}