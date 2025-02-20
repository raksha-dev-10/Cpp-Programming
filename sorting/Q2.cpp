#include<iostream>
using namespace std;

void order( string *arr, int n){
    for(int i=0; i<n-1; i++){
        int minidx = i;

        for(int j=i+1; j<n; j++){
            if(arr[j][0] < arr[minidx][0]){

                minidx = j;
            }
        }
        if(minidx !=i){
            swap(arr[i], arr[minidx]);
        }
    }
}

int main(){

    string arr[]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(arr)/sizeof(arr[0]);

    order(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}