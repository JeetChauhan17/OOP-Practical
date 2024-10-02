#include <iostream>
using namespace std;

class Operations {
private:
	int a = 10,b = 5;

public:
	void swap(int a, int b){
		
	cout<<"Before swap : \na: "<<a<<"\nb: "<<b<<endl; 
    a = a+b;
    b = a-b;
    a = a-b;
	cout<<"After swap : \na: "<<a<<"\nb: "<<b; 
	}
};

int main (){
    Operations o1;
	o1.swap(10,5);
    
	return 0;
}