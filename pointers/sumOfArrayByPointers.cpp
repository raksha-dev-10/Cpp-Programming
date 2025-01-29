#include <iostream>
using namespace std;

void sum( int *arr , int size){
    
    int sum=0;
    for(int i= 1; i<size; i++){
        *(arr +i)+= *(arr +(i-1));
        sum=*(arr +i);
    }
    cout<<sum;
}

int main(){
    cout<<"enter size of array: ";
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout<<"enter elements of array: ";
        cin>>*(arr+i);
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i);
    }
    cout<<endl;

    sum( arr, size);

    return 0;
}