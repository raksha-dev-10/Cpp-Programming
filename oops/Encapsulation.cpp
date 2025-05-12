#include<iostream>
using namespace std;

class square{
    int side;  //private

public:
    void length(int n){   //public function
        side = n;
    }
    int  parameter(){    //public function
        return (side * side);
    }

};

int main(){

    int n = 4;  //assigning a side length
   
    square sq1;   //object of class square
    sq1.length(n);   //calling a function of class square
    cout<<sq1.parameter()<<endl;  //printing the output of function of class square


    return 0;
}