#include<iostream>
using namespace std;

int main(){
    cout<<"enter rows & columns: ";
    int r, c;
    cin>>r>>c;

  //creating a matrix by user
    int matrix[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"enter ele of matrix: ";
            cin>>matrix[i][j];
        }
    }
   //printing the matrix
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
     }
    //creating new matrix by running sum of previous matrix
     for(int i=0; i<r; i++){
        for(int j=1; j<c; j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //printing the new matrix
    cout<<"new matrix: "<<endl;
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}