#include<iostream>
using namespace std;

int main(){
    int a=0, b=0;
    cout<<"enter two digits: ";
    cin>>a>>b;

    cout<<"enter the sign(+,-,/,*,%,):  ";
    char sign;
    cin>>sign;

    switch(sign){
        case '+':
            cout<<"sum is: "<<a+b<<endl;
            break;
        case '-':
            cout<<"sub is: "<<a-b<<endl;
            break;
        case '/':
            cout<<"division is: "<<a/b<<endl;
            break;
        case '*':
            cout<<"product is: "<<a*b<<endl;
            break;
        case '%':
            cout<<"module is: "<<a%b<<endl;
            break;                
    }

    return 0;
}