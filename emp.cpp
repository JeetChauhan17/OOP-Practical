#include <iostream>
using namespace std;

class Employee {
public:
    float basicSalary, DA, HRA, grossSalary;

    void grossSalaryCalc() {
        DA = 0.8 * basicSalary;  
        HRA = 0.2 * basicSalary; 
        grossSalary = basicSalary + DA + HRA;
    }

    void displayGrossSalary() {
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.basicSalary = 30000;
    emp.grossSalaryCalc();
    emp.displayGrossSalary();
    return 0;
}