#include<iostream>
using namespace std;

int find(int *arr, int n, int x, int i){
    if(i==n-1){         //base case
        cout<<"no";
        return 0;
    }
    if(arr[i]==x){
        cout<<"yes";
        return 0;
    }

    find(arr,n,x,i+1);
    return 0;
}

int main(){
    int n = 8;
    int arr[]={4,12,54,14,3,8,6,1};
    int x = 12;

    find(arr, n, x, 0);

    return 0;
}