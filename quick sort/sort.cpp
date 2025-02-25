#include<iostream>
using namespace std;

int partition(int *arr, int first, int last){

    int pivot = arr[last]; 
    int i= first -1;   //for inserrting ele < pivot
    int j = first;     //for checking ele < pivot

    for(j;j<last;j++){     //this loop brings all ele
        if(arr[j]<pivot){  //less than pivot to left
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //now i is pointing to the last ele < pivot
    //so correct position for pivot will be i+1
    swap(arr[i+1], arr[last]);  
    return i+1;
}

void quicksort(int *arr, int first, int last){

    if(first>=last){   //base case
        return;
    }

    int pi = partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);

}

int main(){
    int arr[]={10,12,35,16,18,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}