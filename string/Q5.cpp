#include<iostream>
#include<string>
#include<vector>
using namespace std;

void decoding(string &e, int n, string &d){
    int m=0; char a=' ';
    for(int i=0; i<n; i++){
        if(isdigit(e[i])){
            m = e[i]-'0';
        }
        else if(isalpha(e[i])){
            a = e[i];
        }
        else{
            continue;
        }
    }
    while(m>0){
        m--;
        d.push_back(a);
    }
}

int main(){

    string encoded = "3[b]";
    int n = encoded.size();

    string decoded = "";
    decoding(encoded, n, decoded);

    cout<<decoded;

    return 0;
}