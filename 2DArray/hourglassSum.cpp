#include<iostream>
using namespace std;

int main(){
    cout<<"enter rows & columns of matrix: ";
    int r, c;
    cin>>r>>c;

   //creating a matrix by user input
    int matrix[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"enter elements: ";
            cin>>matrix[i][j];
        }
    }
    //ptinting the matrix
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    //hourglass sum of the matrix(shape= 'I')
    int a=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==1 && j==0 || i==1 && j==2){
                continue;
            }
            else{
                a+=matrix[i][j];
            }
        }
    }
    //printing the sum
    cout<<a;
    return 0;
}