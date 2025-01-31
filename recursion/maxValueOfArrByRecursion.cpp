#include<iostream>
using namespace std;

int max(int*arr, int size,int a,int idx=0){
    if(idx==size){     //base case
        cout<<a;       //printing max value of array
        return 0;
    }
    if(*(arr+idx)>a){
        a= *(arr+idx);   //make a equal to max value
    }
    idx++;
    return max(arr,size,a,idx);    //assumption and selfwork
}

int main(){
    int arr[]= {9,10,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int a = arr[0];      //putting 0th index ele in a variable

    max(arr,size,a);

    return 0;
}
//space complexity = O(n)
//time complexity = O(n)