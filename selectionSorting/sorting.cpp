#include<iostream>
using namespace std;

void fun(int *arr, int n){
    for(int i=0; i<n-1; i++){

        //assuming the minimum ele idx.
        int minidx = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minidx]){

                //getting the actual minimum ele idx.
                minidx = j;
            }
        }
    //if the minimum ele is not at its correct position , then swapping it.    
     if(minidx != i){
        swap(arr[i], arr[minidx]);
     }
    }
    return;
}

int main(){
    int arr[] = {5,3,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    fun(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}