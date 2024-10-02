#include <iostream>
using namespace std;


class Test{
public:
    void disp();
};

void Test:: disp(){
    cout<<"A function of class test";
}

int main(){

    Test t1; 
    t1.disp();

    return 0;
}