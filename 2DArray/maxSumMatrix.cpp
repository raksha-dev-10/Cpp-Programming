#include <iostream>
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
    int a=0, d=0;
   //finding the row with max sum of elements
    for(int i=0; i<r; i++){
        int b=0;
        for(int j=0; j<c; j++){
            b+=matrix[i][j];
        }
        if(b>a){
            a=b;
            d=i;
        }
    }
   //printing the row with max sum of elements
    cout<<d+1;
    return 0;
}