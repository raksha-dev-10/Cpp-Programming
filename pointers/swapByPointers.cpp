#include<iostream>
using namespace std;

int main(){
    int x = 35; 
    int y = 23;

  //pointer variables to store addresses of x and y
    int *ptrx = &x;
    int *ptry = &y;
  
  //creating new variable z 
    int z;
  //storing address of z in pointer variable  
    int *ptrz = &z;

  //swapping by derefrence operator
    *ptrz = *ptry;
    *ptry = *ptrx;
    *ptrx = *ptrz;

  //printing swapped values of x and y
    cout<<"nalue of x: "<<*ptrx<<endl;
    cout<<"value of y: "<<*ptry<<endl;

    return 0;
}