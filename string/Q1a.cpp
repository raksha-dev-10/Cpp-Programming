#include<iostream>
using namespace std;

void sort(string &str){
    int char_range = 256;
    int count[char_range] = {0};

    for(char ch : str){    //Loop through each character in the string str
        count[(int)ch]++;  //(int)c=Convert character to its ASCII integer value
    }

    int index = 0;
    for(int i=0; i<256; i++){
        while(count[i]-- >0){ 
            //character(char)i was in string, loop runs as many times as thecharacter appeared.
            //After each use, it decrements count[i] (post-decrement).
            str[index++] = (char)i;
            //Place the character (char)i at position index in the original string.
            //index++ = it moves to the next position in the string for the next character.
        }
    }
}

int main(){

    string str;
    cout<<"enter a string : "<<endl;
    cin>>str;

    sort(str);

    cout<<"sorted string: "<<str<<endl;

    return 0;
}
// time compleity = O(n + k)	
// space complexity = O(k)