#include<bits/stdc++.h>
using namespace std;
//Varible int
int numofnum;
int genmode_on;
//hamf xl-----------------------------
int maxFreq(int *arr, int n) {
    //Thuật toán moore votting
    int ptu_dang_dem = 0;
    int so_dem = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[ptu_dang_dem]) {
            so_dem++;
        } else {
            so_dem--;
        }
          
        if(so_dem == 0) {
            ptu_dang_dem = i;
            so_dem = 1;
        }
          
    }
      
    return arr[ptu_dang_dem];
}
int maxFreqv2(int arr[], int n)
{
  //đếm như bth, đáng lẽ sort pk ở đây nhưng lỡ cho dưới để áp thêm thuật toán moore
    // Find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
            curr_count = 1;
        
        if (curr_count > max_count) {
            max_count = curr_count;
            res = arr[i-1];
        }
    }
    if (res == arr[0] && max_count == 1){
        res = arr[n-1];
    }
    return res;
}
// -----------------------------------
int main(){
    //user input
    cout<<"Số số nguyên:";
    cin>>numofnum;int array[numofnum];
    cout<<"Máy tự random?,1:True 0:false ?(1/0)";
    cin>>genmode_on;
    //enduser
    // cout<<numofnum;
    //cout<<genmode_on;
    if (genmode_on == 1){
        int i=0;
        srand((unsigned) time(NULL));
        while (i < numofnum){
            array[i]=rand() % 1000002; //Range
            i++;
        }
    }else{
        // cout<<"ẽcutedd";
        for (int k=0;k<numofnum;k++){
            cout<<"nhập phần tử thứ ";
            cout<<k;
            cout<<" của mảng:";
            cin>>array[k];
        }
    }
    cout<<"Array_Gened:";
    for (int i=0;i<numofnum;i++){
        cout<<array[i]<<',';
    }
    cout<<endl;
    // gọi hàm xử lí
    //vì thuật more liệt kê ptu cuối nếu ko có cái nào trội => thêm sort
    sort(array, array+numofnum);

    cout<<"aftersort:";
    for (int i=0;i<numofnum;i++){
        cout<<array[i]<<',';
    }
    cout<<endl;
    int maxnum = maxFreqv2(array,numofnum);//func maxfreq nếu dùng Moore Alogrithm
    cout<<"SO xuất hiện nhiều nhất( lớn nhất nếu tần suất bằng nhau) "<<maxnum;
    return 0;
}
