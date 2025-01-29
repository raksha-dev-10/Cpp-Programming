#include<iostream>
using namespace std;

int main(){
    cout<<"enter size of array: ";
    int size;
    cin>>size;

    cout<<"enter value of k: ";
    int k;
    cin>>k;

    int arr[k];  //array if input size

  //inputing elements of array
    for(int i=0; i<size; i++){
        cout<<"enter elements of array: ";
        cin>>*(arr+i);    //inputing values using pointers
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i);   //pring elements using pointers
    }
    cout<<endl;

  //finding Kth element of array using pointer
    int *ptr = &arr[k-1];
    cout<<"the Kth element of array is: "<<*ptr;

    return 0;
}