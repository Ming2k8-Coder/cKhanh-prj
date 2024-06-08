#include<bits/stdc++.h>
using namespace std;
//var
int m,n;
int numofnum;
int genmode_on;
int maxval;
int main(){
    cout<<"MAX SIZE của Mảng 2D(Hàng cột):";
    cin>>m>>n;
    cout<<"Hàng "<<m<<" Cột "<<n<<endl;
    int array[m][n];
    cout<<"Máy tự random?,1:True 0:false ?(1/0)";;
    cin>>genmode_on;

    if (genmode_on == 1){
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
                cout<<"Nhập phần tử ở hàng "<<i<<" cột"<<j<<"của mảng:";
                cin>>array[i][j];
                cout<<endl;
            }
        }

    }
    
    cout<<"Array_Gened:"<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<array[i][j]<<',';
        }
        cout<<endl;
    }
    //Bắt đầu xl: đang có mảng 2d array
    int extarr[m];//Khởi tạo mảng chứa tổng mỗi hàng của mảng chính
    for (int j=0;j<m;j++){
        int tongvar=0;
        for (int i=0;i<n;i++){
            tongvar += array[j][i];
        }
        extarr[j]=tongvar;//Gán tổng vào mảng tạm
    }
    //tìm số lớn nhất => index òf sln
    int hang_co_maxval = 0;
    int k=0;
    for (;k<m;k++){
        if (extarr[k] > extarr[hang_co_maxval]){
            // cout<<extarr[k]<<endl;
            // cout<<extarr[hang_co_maxval]<<endl;
            hang_co_maxval = k;
        }
    }  
    cout<<"Hàng "<<k<<" có tổng các biến lớn nhất.";
    return 0;
}