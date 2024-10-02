#include <iostream>
using namespace std;

class Employee {
private:
    double basicSalary;
    double allowances;
    double deductions;

public:
    Employee(double basic, double allow, double deduct)
        : basicSalary(basic), allowances(allow), deductions(deduct) {}

    double calculateGrossSalary() const {
        return basicSalary + allowances - deductions;
    }
};

int main() {
    double basic, allowances, deductions;

    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter Allowances: ";
    cin >> allowances;
    cout << "Enter Deductions: ";
    cin >> deductions;

    Employee emp(basic, allowances, deductions);

    double grossSalary = emp.calculateGrossSalary();
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
