#include <iostream>
using namespace std;

class Operations {

public:
	
	void factorial(int n){
        

		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

	}

	void triangleNum(int n){
        

		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }

	}

	void triangleChar(int n){

        enum Alphabet {
            A=1, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
        };        


		for(int i=1; i<=n; i++){
		    for(int j=1; j<=i; j++){
                cout<<char('A' + j-1);
            }
            cout<<endl;
        }

	}
};

int main (){
	int n;

    cout<<"Enter the length of triangle : ";
    cin>>n;

	Operations o1;
	// o1.triangleStar(n);
	// o1.triangleNum(n);
	o1.triangleChar(n);
    
	return 0;
}