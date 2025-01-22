#include<iostream>
using namespace std;

int main(){
    cout<<"enter rows and columns of m1: ";
    int r1, c1;
    cin>>r1>>c1;

  //matrice 1
    int m1[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<"enter ele of m1: ";
            cin>>m1[i][j];
        }
    }
    //printing ele of matrice 1
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter rows and columns of m2: ";
    int r2, c2;
    cin>>r2>>c2;

  //matrice 2
    int m2[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<"enter ele of m2: ";
            cin>>m2[i][j];
        }
    }
    //printing ele of matrice 2
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
   //checking if multiplication is possible
    if(c1!=r2){
        cout<<"multiplication between m1 & m2 is not possible.";
        return 0;
    }

  //new matrice m3, produced by multyplying m1 and m2
    int m3[r1][c2];

  //multifpying m1 & m2 in loop
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int a=0;
            for(int k=0; k<r2; k++){
                a+=m1[i][k]*m2[k][j];
            }
            m3[i][j]=a;  //producing ele of m3
        }
    }
    cout<<"new matrice is: "<<endl;

   //printing ele of new matrice m3
     for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}