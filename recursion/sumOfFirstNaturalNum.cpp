#include<iostream>
using namespace std;

int sum(int n,int m){
    if(m==1){                //base case    
        return n=n*(n+1)/2;  // Sum of first n natural numbers
    }
    int ans = sum(sum(n,m-1),1);  // Recursively compute sum
    return ans;
}

int main(){
    int n=3;
    int m=3;

    cout<<sum(n,m);
    return 0;
}