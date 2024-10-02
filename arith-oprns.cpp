#include <iostream>
using namespace std;

class Operations {
public:

void sum(int a, int b){
	cout<<a<<" + "<<b<<" = "<<a+b;
	cout<<endl;
}

void sub(int a, int b){
	cout<<a<<" - "<<b<<" = "<<a-b;
	cout<<endl;
}

void mul(int a, int b){
	cout<<a<<" * "<<b<<" = "<<a*b;
	cout<<endl;
}

void div(int a, int b){
	cout<<a<<" / "<<b<<" = "<<a/b;
	cout<<endl;
}

void modulus(int a, int b){
	cout<<a<<" % "<<b<<" = "<<a%b;
	cout<<endl;
}
};

int main (){
	int a,b,ch;
	Operations o1;

	cout<<"Enter the 1st value : ";
	cin>>a;

	cout<<"Enter the 2nd value : ";
	cin>>b;
	
	do{
	
	cout<<"\n\nEnter the operation you want to perform : ";
	cout<<"\n1) Addition \n2)Subtraction \n3)Multiplication \n4)Division \n5)Modulus \n6)Exit \nChoice : ";
	cin>>ch;

	switch(ch){
		case 1:
			o1.sum(a,b);
			break;
			
		case 2:
			o1.sub(a,b);
			break;
			
		case 3:
			o1.mul(a,b);
			break;
			
		case 4:
			o1.div(a,b);
			break;
			
		case 5:
			o1.modulus(a,b);
			break;
	}
	}while(ch != 6);

	cout<<"\nBye";
	return 0;

}