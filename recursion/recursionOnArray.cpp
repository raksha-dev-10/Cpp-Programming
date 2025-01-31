#include<iostream>
using namespace std;

int print(int *arr, int size, int idx=0){
    if(idx==size){    
        return 0;     //base case
    }
    cout<<*(arr+idx)<<" ";   //printing value on idx by derefrencing the array pointer

    idx++;           //increment in idx
    
    return print(arr,size,idx);      //assumption and selfwork
}

int main(){
    int arr[]={9,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    print(arr,size);

    return 0;
}