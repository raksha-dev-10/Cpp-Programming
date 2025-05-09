#include<iostream>
using namespace std;

class student{        //class
public:
    string name;      //properties 
    int roll_no;
    string standard;
};

int main(){

    student raksha;          //object
    raksha.name = "Raksha";  //properties of class
    raksha.roll_no = 20;
    raksha.standard = "eleventh";

    cout<<raksha.name<<"-"<<raksha.standard<<"-"<<raksha.roll_no;

    return 0;
}