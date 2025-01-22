#include<iostream>
using namespace std;

int main(){

    //2DArray
    int arr[3][4];

    //size of rows
    int row=sizeof(arr)/sizeof(arr[0]);
    //size of columns
    int col=sizeof(arr[0])/sizeof(arr[0][0]);

   //taking ele input from user
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"enter ele: ";
            cin>>arr[i][j];
        }
    }
   //printing the 2DArray
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}