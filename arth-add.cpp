#include <iostream>
using namespace std;

class Arithematic {
private:
	int a,b;

public:
	void add(int a, int b){
		cout<<"Addition of "<<a<<" and "<<b<<" : "<<a+b;
	}
};

int main (){
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;

	Arithematic a1;
    a1.add(a,b);
	return 0;
}