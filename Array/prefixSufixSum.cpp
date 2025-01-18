#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v1){  //running sum from left
    for(int i=1; i<v1.size(); i++){
        v1[i]=v1[i-1]+v1[i];
    }
}
void sufixSum(vector<int> &v2){    //running sum from right
    for(int j=v2.size()-2; j>=0; j--){
        v2[j]=v2[j+1]+v2[j];
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
    
    cout<<"Print Vector: "<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

    vector<int>v1; //copy of initial vector
    for(int i=0; i<size; i++){
        v1.push_back(v[i]);
    }

    prefixSum(v1);  //running sum of v1 from left


    vector<int>v2;  //second copy of initial vector
    for(int i=0; i<size; i++){
        v2.push_back(v[i]);
    }

    sufixSum(v2);   //rinning sum of v2 from right


   for(int i=1; i<size-1; i++){        //compairing v1 and v2
        for(int j=1; j<size-1; j++){
            if(v1[i]==v2[j] && i==j-1){    //checking for same ele with condition
                cout<<"yes"<<endl;  
                cout<<"position"<<i+1;   //dividing initial array into subarray with equal sum
                break;
            }
        }
    }

    return 0;
}