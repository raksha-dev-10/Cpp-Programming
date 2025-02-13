#include<iostream>
using namespace std;

void fun(int *arr, int n, int i, int x){
    if(i==n){
        return;
    }
    if(arr[i]==x){
        cout<<i<<" ";
    }
    return fun(arr, n, i+1, x);
}

int main(){
    int arr[]= {1,2,9,2,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    fun(arr, n, 0, target);

    return 0;
}