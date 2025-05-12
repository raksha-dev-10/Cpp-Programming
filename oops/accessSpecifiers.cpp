#include <iostream>
using namespace std;

class parent{

public:
    int x;

protected:
    int y;

private:
    int z;
};

class child1: public parent{
    // x = public
    // y = protected
    // z = inacessable
};
class child2: protected parent{
    // x = protected
    // y = protected
    // z = inacessable
};
class child3: private parent{
    // x = private
    // y = private
    // z = inacessable
};

int main(){

    parent p1;
    p1.x = 9;
    
    return 0;
}
