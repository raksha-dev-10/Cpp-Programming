#include<iostream>
using namespace std;

int multiple(int n, int k){
    if(k==1){
        cout<<n*k<<" ";
        return 0;
    }
    multiple(n,k-1);
    cout<<n*k<<" ";
    return 0;
}

int main(){
    int n=3;
    int k=8;

    multiple(n,k);

    return 0;
}