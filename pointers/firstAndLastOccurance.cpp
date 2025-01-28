#include<iostream>
using namespace std;

void findFirstAndLastOccurance(string a, char c, int *first, int *last){

    //finding first occurance
    for(int i=0; i<a.size(); i++){
        if(a[i]==c){
            *first=i;
            break;
        }
    }

    //finding last occurance
    for(int i=a.size(); i>=0; i--){
        if(a[i]==c){
            *last=i;
            break;
        }
    }
}

int main(){
    string a = "twitter";
    char c= 't';

    //creating two variables to store first and last occurance od character c
    int first= -1;
    int last = -1;

  //creating pointer variable for first and last variables
    int *pf= &first;
    int *pl= &last;

   //calling out function
    findFirstAndLastOccurance(a, c, pf, pl);

  //printing first and last occurance of character c
    cout<<first<<" "<<last;

    return 0;
}