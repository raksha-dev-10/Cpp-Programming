#include<iostream>
using namespace std;

void fun(int *arr, int n){

    for(int i=0; i<n-1; i++){
        bool flag = false;  //optimization

        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){    
                flag = true;
                //swapping
                swap(arr[j], arr[j+1]);
            }
        }
        //to prevent unnecessary iterations
        if(!flag){ break;}        
    }              
    return ;
}

int main(){
    int arr[]= {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    fun(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}