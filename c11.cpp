#include<bits/stdc++.h>
using namespace std;
int num;
int a;
int main(){
    cout<<"BT Câu 11";
    cout<<"Nhập số bé  hơn 10^7 và in ra dãy từ 0:";
    cin>> num;
    if (num>10000000){
        cout<<"Số đã lớn hơn 10^7,có khả năng tràn console,mời nhập lại";
        cin>> num;}
    cout<<"Dãy số bắt đầu:";
    while (a<=num){
        cout<<a<<",";
        a++;
    }
    return 0;
}