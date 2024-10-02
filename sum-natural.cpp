#include <iostream>
using namespace std;

class NaturalSum {
public:
    int naturalSumFn(int n) {
        return n * (n + 1) / 2;
    }
};

int main() {
    int n = 5;
    NaturalSum obj;
    cout << "Sum of first " << n << " natural numbers: " << obj.naturalSumFn(n);
    return 0;
}