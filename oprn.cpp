#include <iostream>
#include <cmath>
using namespace std;

class Operations {
public:

void performOperations(int a, int b){
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	cout<<a<<" % "<<b<<" = "<<a%b<<endl;
	cout << "Square root of 16: " << sqrt(16) << endl; 
	cout << "Power (2^5): " << pow(2, 5) << endl; 
	cout << "Sine of 45 degrees: " << sin(45 * M_PI / 180) << endl;
	cout << "Logarithm of 100: " << log(100) << endl;
	
}
};

int main (){
	int a,b,ch;
	Operations o1;

	cout<<"Enter the 1st value : ";
	cin>>a;

	cout<<"Enter the 2nd value : ";
	cin>>b;
	
	o1.performOperations(a,b);

	return 0;

}