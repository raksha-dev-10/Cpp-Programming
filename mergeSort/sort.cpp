#include<iostream>
using namespace std;

void merge(int *arr, int l, int mid, int r){
    int an = mid-l+1;  //size of array a
    int bn = r-mid;    //size of array b

    int a[an] ,b[bn];  //2 temp array

    for(int i=0; i<an; i++){
        a[i] = arr[l+i];
    }
    for(int j=0; j<bn; j++){
        b[j] = arr[mid+1+j];
    }

    int i = 0;   //initial index of sub array a
    int j = 0;   //initial index of subarray b
    int k = l;   //initial index of merged & sorted array

    while(i<an && j<bn){   
        if(a[i]<b[j]){           
            arr[k++] = a[i++];   
        }                        //checking the smaller element and 
        else{                    //placing it first in the merged array
            arr[k++] = b[j++];
        }
    }
    while(i<an){
        arr[k++] = a[i++];      //if above loop is complete but still
    }                           //elements of either subarray is left, then 
    while(j<bn){                //placing them in the merged array
        arr[k++] = b[j++];
    }
    
}

void sort(int *arr, int l, int r){
   //base case = when only one element is in the array
    if(l==r){
        return; 
    }

    //mid point from where the array will break
    int mid = (l+r)/2;
    //sorting first half of the array
    sort(arr, l, mid);                   //recursive call
    //sorting next half of the array
    sort(arr, mid+1, r);                 //recursive call
    //merge function to merge both half
    merge(arr, l ,mid, r);

}

int main(){
    
    int arr[]= {10,28,24,6,24,16,39,45};
    int n = sizeof(arr)/sizeof(arr[0]);


    sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}