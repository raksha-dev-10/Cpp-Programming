#include<iostream>
using namespace std;
 
void smallest(int &x, int &y, int &z){
    int *a = &x;
    int *b = &y; 
    int *c = &z;

    if(*a<*b && *a<*c){
        cout<<"smallest num: "<<*a;
    }
    else if(*b<*a && *b<*c){
        cout<<"smallest num: "<<*b;
    }
    else{
        cout<<"smallest num: "<<*c;
    }
}

void largest(int &x, int &y, int &z){
    int *a = &x;
    int *b = &y; 
    int *c = &z;

    if(*a>*b && *a>*c){
        cout<<"largest num: "<<*a;
    }
    else if(*b>*a && *b>*c){
        cout<<"largest num: "<<*b;
    }
    else{
        cout<<"largest num: "<<*c;
    }
}

int main(){
    cout<<"enetr 3 nums: ";
    int x, y, z;
    cin>>x>>y>>z;

    smallest(x, y, z);

    largest(x,y,z);

    return 0;
}