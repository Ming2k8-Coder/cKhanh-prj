#include<bits/stdc++.h>
using namespace std;
string st;
int main(){
    cout<<"Nhập String:";
    getline(cin,st);
    int i=0;
    while(st[i] == ' '){
        st.erase(i,1);
    }
    cout<<"Lọc dấu cách đầu:"<<st;
    cout<<"."<<endl;
    int j=st.size()-1;
    while(st[j] == ' '){
        st.erase(j,1);
        j--;
    }
    cout<<"Lọc dấu cách cuối:"<<st;
    cout<<"."<<endl;
    for (int i=0;i<st.size();i++){
        
        
    }
}