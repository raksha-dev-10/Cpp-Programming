#include<iostream>
using namespace std;

void fun(int *arr, int n){
    for(int i=1; i<n; i++){
        int currentele = arr[i];

        int j = i-1;
//finding correct position for current ele
        while(j>=0 && arr[j]>currentele){
            arr[j+1]=arr[j];
            j--;
        }
//insert current ele to its correct position
        arr[j+1]=currentele;
    }
}

int main(){
    int arr[] = {5,2,7,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    fun(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}