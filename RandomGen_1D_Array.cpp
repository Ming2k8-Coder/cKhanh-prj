#include<bits/stdc++.h>
using namespace std;
//var
int m,n;
int numofnum;
bool genmode_on;
int maxval;
bool printYN = 1;
int main(){
    cout<<"MAX SIZE của Mảng 1D(Hàng):";
    cin>>m;
    cout<<"Số ô: "<<m<<endl;
    int array[m];
    if (m > 100){
        cout<<"Đã phát hiện mảng lớn, khuyên dùng máy random và không in mảng đã tạo"<<endl;
        cout<<"Có in mảng sau khi tạo?,1:True 0:False";
        cin >>printYN;
    }
    cout<<"Máy tự random?,1:True 0:False";;
    cin>>genmode_on;

    if (genmode_on){
        cout<<"Số tối đa nếu random:";
        cin>>maxval;
        srand((unsigned) time(NULL));//seed
        for (int i=0;i<m;i++){
            array[i]=rand() % maxval; //Range
        }

    
    }else{
        for (int i=0;i<m;i++){
            cout<<"Nhập phần tử ở ô số "<<i<<" của mảng";
            cin>>array[i];
            cout<<endl;
            }
        }
    if (printYN){
        cout<<"Array_Gened:"<<endl;
        for (int i=0;i<m;i++){
            cout<<array[i]<<',';   
        }
    }
}