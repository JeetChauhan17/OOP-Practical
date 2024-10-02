#include <iostream>
using namespace std;

class Operations {
private:
	int year;

public:
	void isLeapYear(int year){
		if((year % 400 == 0) || ((year % 100 !=0) && (year % 4 == 0) )){
			cout<<year<<" Is a leap year.";
		} else{
			cout<<year<<" Is not a leap year.";
		}
	}
};

int main (){
	int a;
	Operations o1;
	cout<<"Enter the value to test: ";
	cin>>a;
	o1.isLeapYear(a);
    
	return 0;
}