#include <iostream>
using namespace std;


class Test{
public:
    void ref(int &a){
        cout<<"\noriginal (class) : "<<a;
        a++;
        cout<<"\nincremeted (class) : "<<a;
    }
    void val(int b){
        cout<<"\noriginal (class) : "<<b;
        b++;
        cout<<"\nincremeted (class) : "<<b;
    }
};


int main(){
    int a = 10, b = 10;

    cout<<"\n\nCall by reference : ";
    cout<<"\noriginal (main) : "<<a;
    Test t1;
    t1.ref(a);
    cout<<"\nincremeted (main) : "<<a<<" (value changed)";

    cout<<"\n\nCall by value : ";
    cout<<"\noriginal (main) : "<<b;
    t1.val(b);
    cout<<"\nincremeted (main) : "<<b;
    return 0;
}