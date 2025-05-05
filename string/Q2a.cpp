#include<iostream>
#include<string>
using namespace std;

void anagram_check(string &s, string &t){
    int count[26] = {0};

    for(int i=0; i<s.size(); i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(count[i]>0){
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
        anagram_check(s,t);

    }
    else{
        cout<<"false";
    }
    return 0;
}