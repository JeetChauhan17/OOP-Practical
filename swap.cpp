#include <iostream>
using namespace std;

class Operations {

public:
	void swap(int a, int b){
        int temp;

		temp = a;
		a = b;
		b = temp;
		cout<<"After swap : \na: "<<a<<"\nb: "<<b;
	}
};

int main (){
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Before swap : \na: "<<a<<"\nb: "<<b<<endl; 
	Operations o1;
	o1.swap(a,b);

	return 0;
}