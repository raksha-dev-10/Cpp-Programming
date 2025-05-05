#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"ënter a string: ";
    cin>>str;
    int n = str.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(int(str[i]) > int(str[j])){
                swap(str[i],str[j]);
            }
        }
    }

    cout<<str<<endl;

    return 0;
}