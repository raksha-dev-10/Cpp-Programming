#include<iostream>
#include<vector>
using namespace std;

void f(int *arr, int n, int i, int sum, vector<int> &result){
    if(i==n){                   //base case
        result.push_back(sum);  //adding elements to result vector
        return;
    }

    //two choises
    f(arr,n,i+1,sum+arr[i],result);  //to add element to sum
    f(arr,n,i+1,sum,result);         //not adding element to sum
    return;
}

int main(){
    int arr[]={2,4,5};
    int n = 3;
    int sum = 0;
    vector<int>result;

    f(arr,n,0,sum,result);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
