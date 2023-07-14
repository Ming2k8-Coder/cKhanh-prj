#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Random Number Generator(RNG)"<<endl;
    cout<<"Số tối đa: ";
    cin>>a;
    srand((unsigned) time(NULL));
    int random = rand() % a; //Range
    cout<<"Số đã tạo: "<<random; 
}