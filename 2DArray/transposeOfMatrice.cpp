#include<iostream>
using namespace std;

int main(){
    cout<<"enter rows & columns of matrix: ";
    int r, c;
    cin>>r>>c;

//creating matrix 1 by user
    int m1[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"enter ele of m1: ";
            cin>>m1[i][j];
        }
    }
   //printing matrix 1
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<m1[i][j];
        }
        cout<<endl;
    }
//creating matrix 2 by tranposing matrix 1

  //col size of m1 is row size of m2
  //row size of m1 is col size of m2
    int m2[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            m2[j][i]=m1[i][j];
        }
    }
  //printing matrix 2
    cout<<"new matrix: "<<endl;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<m2[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}