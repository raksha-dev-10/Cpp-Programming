#include <iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v){
    for(int i=1; i<v.size(); i++){
        v[i]=v[i]+v[i-1];
    }
}

int main(){
    cout<<"enter size of vector: ";
    int size;
    cin>>size;

    vector<int>v;

    for(int i=0; i<size; i++){
        cout<<"enter ele: ";
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    prefixSum(v);

    cout<<"enter 2 indices: ";
    int l, r;
    cin>>l>>r;

    int sum=0;
    sum=v[r]-v[l-1];
    cout<<sum;

    return 0;
}