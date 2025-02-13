#include<iostream>
using namespace std;

void fun(int *arr, int n, int j){
    if(n==0){
        return;
    }
    for(j=0; j<n; j++){
        cout<<arr[j]<<" ";
        arr[j]+=arr[j+1];
    }
    cout<<endl;
    return fun(arr, n-1, j);
}

int main(){
    int arr[]= {5,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    fun(arr, n, 0);

    return 0;
}