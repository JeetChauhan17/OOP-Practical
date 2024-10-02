#include <iostream>
using namespace std;

class Factorial {
public:
    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    int n;
	cout<<"Enter the Number to test : ";
	cin>>n;
	
    Factorial f1;
    cout << "Factorial of " << n << " is: " << f1.findFactorial(n);
    return 0;
}