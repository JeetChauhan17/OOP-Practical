#include <iostream>
using namespace std;

int a = 10, b = 10;

class Test{
public:

    void scope(){
        int a = 5;
        cout<<"A : (local variable) : "<< a << endl;
        cout<<"A : (global variable) : "<< ::a << endl;
    }
};

int main(){
    int b = 2;

    Test t1; 
    t1.scope();
    
    cout<<"B : (local variable) : "<< b << endl;
    cout<<"B : (global variable) : "<< ::b << endl;

}