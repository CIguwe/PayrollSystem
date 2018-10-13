#include <iostream>
#include <stdexcept>
#include "BaseAndCommissionEmployee.h"
using namespace std;

    // constructor
    BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last, const string &ssn, double sales, double rate, double salary )
                                        : CommissionEmployee( first, last, ssn, sales, rate )
{
        setBaseSalary( salary ); // validate and store the base salary
}
    BasePlusCommissionEmployee::setBaseSalary(salary)
{
       if (salary >= 0.0)
            baseSalary = salary;
        else
            throw invalid_argument("Salary must be equal to or greater than 0.0");
}

    double BasePlusCommissionEmployee::getBaseSalary() const
{
      return baseSalary;
}
    // calculate earnings and override pure virtual function earnings in Employee class
    double BasePlusCommissionEmployee::earnings() const
{
        return getBaseSalary + CommissionEmployee::earnings();
}

    void BasePlusCommissionEmployee::print() const
{
        cout << "Base & Commission Employee: ";
        Employee::print(); // code reuse
        cout << "\nBase Salary: " << getBaseSalary() << ";" << endl;
}
