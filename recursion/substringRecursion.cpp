#include<iostream>
#include<vector>
using namespace std;

int fun(string a, int n,int i, string b, vector<string> &l){
    if(i==n){
        l.push_back(b);   //base case
        return 0;
    }
    
    fun(a, n, i+1, b + a[i], l);  //taking the character
    fun(a,n,i+1,b,l);             //not taking the character
    return 0;
}

int main(){
    string a = "abc";    //string
    int n = a.size();    //size of string
    string b = "";      //empty string
    vector<string>l;    //result vector

    fun(a,n,0,b,l);

//printing all characters of vector string
    for(int i=0; i<l.size(); i++){
        cout<<l[i]<<" ";
    }

    return 0;
}