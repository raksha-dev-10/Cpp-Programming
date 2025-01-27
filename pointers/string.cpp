#include<iostream>
using namespace std;

//function to find first, last, and count of character
int fun(string a, char *first, char *last){
    *first =a[0];
    *last = a[a.size()-1];
    int cnt =0;
    
    //itrating each character of variable a
    for(auto &ch :a){
        if(ch=='t'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    cout<<"enter a word: ";
    string a;
    cin>>a;

    char first, last;
    int count = fun(a, &first, &last);
    cout<<first<<" "<<last<<" "<<count;

    return 0;
}