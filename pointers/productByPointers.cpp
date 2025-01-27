#include<iostream>
using namespace std;

int main(){
    cout<<"enter 2 nums: ";
    int x, y;
    cin>>x>>y;
  
  //pointer variables to store addresses of x and y
    int *ptrx = &x;
    int *ptry= &y;
  
  //new variable to store product
    int product;
  //pointer variable to store address of product variable
    int *multi = &product;

  //multiplying x and y using derefrence operator
    *multi = *ptrx * *ptry;
    cout<<*multi;

    return 0;
}