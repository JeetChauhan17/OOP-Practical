#include <iostream>
using namespace std;

class Operations {

public:
	
	void reversed(int num){
        int reminder, rev = 0;

		while(num!=0){
			reminder = num % 10;
			rev = rev * 10 + reminder;
			num /= 10;
		}
		cout<<"Reversed No : "<<rev;
	}
};

int main (){
	int a;
	cout<<"Enter the value to test: ";
	cin>>a;
    
	Operations o1;
	o1.reversed(a);
    
	return 0;
}