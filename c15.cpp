#include<bits/stdc++.h>
using namespace std;
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
    ///Bắt đầu xl
    /*
    Mảng có dạng
    <----Hàng m----------->
    @ @ @ @ @ @ @ @ @ @ @ ^
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ Cột n
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ | 
    @ * * * * * * * * * @ |
    @ @ @ @ @ @ @ @ @ @ @ v
    */
   int sum;
   for (int j=0;j<n;j++){
    //tính tổng hàng 0
    sum += array[0][j];
    sum += array[n-1][j];
   }
       /*
    Mảng có dạng
    <----Hàng m----------->
    - - - - - - - - - - - ^
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ Cột n
    @ * * * * * * * * * @ |
    @ * * * * * * * * * @ | 
    @ * * * * * * * * * @ |
    - - - - - - - - - - - v
    */
    for (int i=1;i<m-1;i++){
    //tính tổng cột 0 (trừ 2 ptu đã tính)
    sum += array[i][0];
    //cột n-1
    sum += array[i][n-1];
   }
   cout<<"Tổng viền ngoài của bảng là: "<<sum;
   return 0;
}