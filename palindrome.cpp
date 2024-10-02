#include <iostream>
using namespace std;

class Operations {
public:
	int reversed(int num){
		int reminder, rev = 0;
		
		while(num!=0){

		reminder = num % 10;
		rev = rev * 10 + reminder;
		num /= 10;
		}
	cout<<"Reversed No : "<<rev;
    return rev;
	}
};

int main (){
	int a,b,c;

	cout<<"Enter the value to test: ";
	cin>>a;

	Operations o1;
	b = o1.reversed(a);
	c = o1.reversed(b);
	if(b == c){
		cout<<endl<<a<<" is a palindrome.";
	}else{
	cout<<endl<<a<<" is not a palindrome.";	
	}
	return 0;
}