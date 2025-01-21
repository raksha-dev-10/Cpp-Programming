#include <iostream>
using namespace std;

void check(int x,int y){

    //x,y are two intergers
    for(int i=x; i<=y; i++){
        int a=0;
        for(int j=2; j<=9; j++){
            if(i%j==0 && i!=j){
                a++;
                break;
            }
        }
        if(a==0){
            cout<<i<<" ";
        }
    }
}

int main(){

    cout<<"enter two integers: ";
    int a, b;
    cin>>a>>b;

   //checking prime num between the two int
    check(a,b);

    return 0;
}