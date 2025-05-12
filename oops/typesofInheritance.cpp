#include<iostream>
using namespace std;

class parent1{
public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};

class child1:public parent1{  //direct inheritance from parent1
public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class parent2{
public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};

class child2: public parent1, public parent2{  //multiple inheritance from parent 1,2
public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};

class grandchild: public child1{  //multi level inheritance from parent1 , child1
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};

int main(){

    child1();      //parent1 class, child1 class
    child2();      //parent1 class, parent2 class, child2 class
    grandchild();  //parent1 class, child1 class, grandchild class

    return 0;
}