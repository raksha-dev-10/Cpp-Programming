#include<iostream>
#include<string>
#include<vector>
using namespace std;

void isomorph_check(string &s, string &t){
     vector<int> v1(128,-1);
     vector<int> v2(128,-1);

     for(int i=0; i<s.size(); i++){
        if(v1[s[i]] != v2[t[i]]){
            cout<<"not isomorphic";
            return;
        }
        v1[s[i]] = v2[t[i]] = i;
     }
     cout<<"are isomorphic";
     return;
}

int main(){

    string s = "kill";
    string t = "bill";

    if(s.size() == t.size()){
        isomorph_check(s,t);
    }
    else{
        cout<<"false";
    }
    return 0;
}