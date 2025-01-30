#include<iostream>
using namespace std;

//function to factorize the input num usinh PMI
int f(int n){
    if(n==1){       //base case
        return 1;
    }
    int ans = n * f(n-1);  //assumption & selfwork
    return ans;
}

int main(){
    cout<<"enter a digit to be factorizes: ";
    int k;
    cin>>k;
    
    int i = f(k);
    cout<<i;

    return 0;
}