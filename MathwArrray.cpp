#include<bits/stdc++.h>
using namespace std;
//var
int m,n;
bool genmode_on;
int maxval1,maxval2;
bool printYN = 1;
int main(){
    cout<<"MAX SIZE của Mảng 2D(Hàng cột):";
    cin>>m>>n;
    int arrayA[m][n];
    int arrayB[m][n];
    int arrayC[m][n];
    if (m > 20 || n > 20){
        cout<<"Đã phát hiện mảng lớn, khuyên dùng máy random và không in mảng đã tạo"<<endl;
        cout<<"Có in mảng sau khi tạo?,1:True 0:False";
        cin >>printYN;
    }
    cout<<"Máy tự random?,1:True 0:False";;
    cin>>genmode_on;

    if (genmode_on){
        cout<<"Số tối đa nếu random mảng 1,2:";
        cin>>maxval1>>maxval2;
        srand((unsigned) time(NULL));
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                arrayA[i][j]=rand() % maxval1; //Range
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                arrayB[i][j]=rand() % maxval2; //Range
            }
        }

    
    }else{
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<"Nhập phần tử ở hàng "<<i<<" cột "<<j<<" của mảng 1:";
                cin>>arrayA[i][j];
                cout<<endl;
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<"Nhập phần tử ở hàng "<<i<<" cột "<<j<<" của mảng 2:";
                cin>>arrayB[i][j];
                cout<<endl;
            }
        }

    }
    if (printYN){
        cout<<"Array_Gened1:"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<arrayA[i][j]<<',';
            }
            cout<<endl;
        }
        cout<<"Array_Gened2:"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout<<arrayB[i][j]<<',';
            }
            cout<<endl;
        }
    }
    //Xử lí
    char operand;
    cout<<"Phép toán cộng trừ ?(+,-)";
    cin>>operand;
    if (operand == '+'){
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                arrayC[i][j]=arrayA[i][j]+arrayB[i][j];
            }
        }
    }else if (operand == '-'){
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
               arrayC[i][j]=arrayA[i][j]-arrayB[i][j];
            }
        } 
    }else {
        cout<<"OPERAND ERROR";
    }
    cout<<"Kết quả tính toán:"<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arrayC[i][j]<<',';
        }
        cout<<endl;    
    }
}