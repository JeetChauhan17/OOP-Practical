#include <iostream>
using namespace std;

class Operations {
private:
	int a;

public:
	void isEven(int a){
	(a%2==0)?cout<<a<<" is even":cout<<a<<" is odd";
	}
};

int main (){
	int a;
	Operations o1;
	cout<<"Enter the value to test: ";
	cin>>a;
	o1.isEven(a);
    
	return 0;
}