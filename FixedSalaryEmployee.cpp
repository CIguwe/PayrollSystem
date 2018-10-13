#include <iostream>
#include <stdexcept>
#include "FixedSalaryEmployee.h"
using namespace std;

    // the constructor
    FixedSalaryEmployee::FixedSalaryEmployee( const string &first, const string &last, const string &ssn, double salary )
    : Employee(first, last, ssn)
{
    setMonthlySalary( salary );
}
    // set salary
    void SalariedEmployee::setMonthlySalary( double salary )
{
    if( salary >= 0.0 )
    monthlySalary = salary;
    else
        throw invalid_argument( "Monthly salary must be >= 0.0" );
}
    // return salary
    double FixedSalaryEmployee::getMonthlySalary() const
{
    return monthlySalary;
}

    // calculate earnings;
    // override the pure virtual function earnings in Employee
    double FixedSalaryEmployee::earnings() const
{
    return getMonthlySalary();
}

 // print FixedSalaryEmployee's information with the virtual function print
    void FixedSalaryEmployee::print() const
{
    cout << "Fixed Salary Employee: ";
    Employee::print(); // reuse the Employee class print function
    cout << "\nweekly salary: " << getMonthlySalary();
}
