#include <iostream>
using namespace std;

class Operations {

public:
	
	void triangleStar(int n){
        

		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
            cout<<endl<<endl;

	}

	void triangleNum(int n){
        

		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }

            cout<<endl<<endl;
	}

	void triangleChar(int n){

		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<char('A' + j-1);
            }
            cout<<endl;
        }

            cout<<endl<<endl;
	}
};

int main (){
	int n;

    cout<<"Enter the length of triangle : ";
    cin>>n;

	Operations o1;
	o1.triangleStar(n);
	o1.triangleNum(n);
	o1.triangleChar(n);
    
	return 0;
}