#include<iostream>
using namespace std;

int seq(int n){
    if(n==1){          //base case
        cout<<1<<" ";
        return 0;
    }
    
    seq(n-1) ;       //assumption & selfwork
    cout<<n<<" ";    //printing 1 to n
    return 0;
}

int main(){
    cout<<"enter a number: ";
    int n;
    cin>>n;

    seq(n);
    return 0;
}