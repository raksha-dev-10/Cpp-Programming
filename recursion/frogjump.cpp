#include<iostream>
using namespace std;

int cost(int n, int *arr, int i){
    //base case
    if(i==n-1){    
        return 0;
        };

    if(i==n-2){
        return cost(n,arr,i+1) + abs(arr[i]-arr[i+1]);
        }

    return min(cost(n,arr,i+1) + abs(arr[i]-arr[i+1]) , cost(n,arr,i+2) + abs(arr[i]-arr[i+2]));
    //finding minimun
}

int main(){
    int n = 4;
    int arr[] = {10,30,40,20};
    int i = 0;

    cout<<cost(n, arr, i);

    return 0;
}