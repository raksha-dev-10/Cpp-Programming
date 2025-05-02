#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main(){

    string str("raksha");
    // reverse(str.begin(),str.end());  //ahskar
    // cout<<str<<endl;

    cout<<str.substr(0,3)<<endl;  //rak
    cout<<str.substr(1)<<endl;    //aksha(length not defined whole string from starting point is printed)

    string str1("sharma");
    cout<<str+str1<<endl;   //rakshasharma

    str+=str1;
    cout<<str<<endl;   //str = rakshasharma

    char c1[]="raksha";
    char c2[]="sharma";
    strcat(c1,c2);      //c1 = rakshasharma
    cout<<c1<<endl;

    char ch = 'q';
    str.push_back(ch);  //adding character to string
    cout<<str<<endl;   //rakshasharmaq  

    cout<<str.size()<<endl;  //size of string
    cout<<strlen(c1)<<endl;  //size of character

    int num = 473;
    string nums = to_string(num);     //converting integer to string
    cout<<nums[0]<<nums[1]<<nums[2]<<endl; //473
    nums+="23";  
    cout<<nums<<endl;   //nums = 47323

    return 0;
}