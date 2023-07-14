#include<bits/stdc++.h>
using namespace std;
//var
int m,n;
int numofnum;
bool genmode_on;
int maxval;
bool printYN;
int main(){
    cout<<"MAX SIZE của Mảng 2D(Hàng cột):";
    cin>>m>>n;
    cout<<"Hàng "<<m<<" Cột "<<n<<endl;
    int array[m][n];
    if (m > 20 || n > 20){
        cout<<"Đã phát hiện mảng lớn, khuyên dùng máy random và không in mảng đã tạo"<<endl;
        cout<<"Có in mảng sau khi tạo?,1:True 0:False";
        cin >>printYN;
    }
    cout<<"Máy tự random?,1:True 0:False";;
    cin>>genmode_on;

    if (genmode_on){
        cout<<"Số tối đa nếu random:";
        cin>>maxval;
        srand((unsigned) time(NULL));
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                array[i][j]=rand() % maxval; //Range
            }
        }

    
    }else{
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<"Nhập phần tử ở hàng "<<i<<" cột "<<j<<" của mảng";
                cin>>array[i][j];
                cout<<endl;
            }
        }

    }
    if (printYN){
        cout<<"Array_Gened:"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<array[i][j]<<',';
            }
            cout<<endl;
        }
    }
}