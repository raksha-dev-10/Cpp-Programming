#include<iostream>
#include<string>
using namespace std;

void count_sort(string &x){
    int char_range = 256;
    int count[char_range] = {0};

    for(char ch : x){
        count[(int)ch]++;
    }

    int index = 0;
    for(int i=0; i<256; i++){
        while(count[i]-- >0){ 
            x[index++] = (char)i;
        }
    }
}

void check(string &s, string &t){
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]){
            cout<<"false";
            return;
        }
    }
    cout<<"true";
}

int main(){

    string s , t;
    cout<<"enter first word: ";
    cin>>s;
    cout<<"enter second word: ";
    cin>>t;

    if(s.size() == t.size()){ 
        count_sort(s);count_sort(t);
        check(s,t);

    }
    else{
        cout<<"false";
    }
    return 0;
}