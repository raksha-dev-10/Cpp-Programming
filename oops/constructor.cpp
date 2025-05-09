#include<iostream>
using namespace std;

class movie{    //class
public:
    string name;
    string status;//properties
    int rating;

    movie(){    //default constructor
        status = "not released";
        rating = 0;
    }
    movie(string x, int y){  //parameterised constructor
        status = x;
        rating = y;
    }

    movie(movie &a){   //copy constructor
        status = a.status;
        rating = a.rating;
    }
};

int main(){

    movie aakrosh;   //object 1 - using default constructor
    aakrosh.name = "aakrosh";
    cout<<aakrosh.name<<"-"<<aakrosh.status<<", "<<aakrosh.rating<<endl;

    movie raid("released", 8); //object 2 - using parameterised constructor
    raid.name = "raid";
    cout<<raid.name<<"-"<<raid.status<<", "<<raid.rating<<endl;

    movie raid2 = raid;    //object 3 - using copy constructor
    raid2.name = "raid2";
    cout<<raid2.name<<"-"<<raid2.status<<", "<<raid2.rating<<endl;

    return 0;
}