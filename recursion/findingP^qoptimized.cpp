#include<iostream>
using namespace std;

int power(int p, int q){
    if(q==0){
        return 1;       //base case
    }
    if(q%2==0){
        //q is even
        int ans = power(p,q/2);
        return ans*ans;         //assumption and self work
    }
    else{
        //q is odd
        int ans = power(p,q/2);
        return p*ans*ans;       //assumption and self work
    }
}

int main(){
    cout<<"enter digit and power: ";
    int p,q;
    cin>>p>>q;

    int ans = power(p,q);
    cout<<ans;

    return 0;
}
//space complexity= O(log q)
//time complexity = O(log q)