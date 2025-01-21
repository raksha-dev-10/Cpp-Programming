#include <iostream>
using namespace std;

int main(){
    //taking odd rows value from user
    cout<<"enter number of rows: ";
    int r;
    cin>>r;

   //finding mid row of the diamond
    int b=(r+1)/2;
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            if(i==3 || j==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}