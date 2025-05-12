#include<iostream>
using namespace std;

class shape{
public:
    void area(int l, int b){  //of rectangle
        int a = l*b;
        cout<<a<<endl;
    }

    void area(int s){  //of square
        int a = s*s;
        cout<<a<<endl;
    }

    void area(int x, int y, int z){  //of triangle
        int a = x*y*z;
        cout<<a<<endl;
    }

    void area(float x, int y){  //of circle
        float a = x*(y*y);
        cout<<a<<endl;
    }
};

int main(){

    shape s;
    s.area(4,2);  //8
    s.area(3);   //9
    s.area(2,3,2);   //12
    s.area(float(3.17),4);  //50.72

    return 0;
}