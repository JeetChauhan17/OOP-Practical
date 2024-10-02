#include <iostream>
using namespace std;

class Arithematic {
private:
	int a,b,c;

public:
	void max(int a, int b, int c){
		a>b? a>c? cout<<"A is max" : cout<<"C is max" : b>c?          cout<<"B is max" : cout<<"C is max";
	}
};

int main (){
	int a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c ";
	cin>>c;

	Arithematic a1;
	a1.max(a,b,c);
	return 0;
}