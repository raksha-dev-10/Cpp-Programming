#include<iostream>
using namespace std;

string getValueOf(string s, int size, char a,int idx){
    
    if(idx==size){
        return s;
    }
    if(s[idx]==a){
        s.erase(idx , 1);
    }
    idx++;
    return getValueOf(s,size,a,idx);

}

int main(){
    string s = "abcax";
    int size = s.size();
    char a = 'a';
    string ab = getValueOf(s,size,a,0);
    cout<<ab;
    return 0;
}