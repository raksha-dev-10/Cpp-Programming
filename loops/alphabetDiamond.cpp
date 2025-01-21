#include <iostream>
using namespace std;

int main(){
    //taking odd rows value from user
    cout<<"enter number of rows: ";
    int r;
    cin>>r;

   //finding mid row of the diamond
    int b=(r+1)/2;

   //uppercase alphabets 65-90 
    int a=65;

       //loop for upperhalf of diamond 
        for(int i=1; i<=b; i++){
            int a=65;
            for(int j=1; j<=b; j++){
                if(j<=b-i){
                    cout<<" ";
                }
                else{
                   //[char(a)]this converts integer to respective alphabet 
                    cout<<char(a);
                    a++;
                }
            }
            for(int j=1; j<b; j++){
                if(j<i){
                    cout<<char(a);
                    a++;
                }
            }
            cout<<endl;
        }

      //loop for lowerhalf of diamond  
        for(int i=1; i<b; i++){
            int a=65;
            for(int j=1; j<=b; j++){
                if(j<=i){
                    cout<<" ";
                }
                else{
                    cout<<char(a);
                    a++;
                }
            }
            for(int j=1; j<b; j++){
                if(j<=(b-1)-i){
                    cout<<char(a);
                    a++;
                }
            }
            cout<<endl;
        }

    return 0;
}