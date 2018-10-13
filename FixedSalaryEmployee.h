#ifndef FIXEDSALARYEMPLOYEE_H_INCLUDED
#define FIXEDSALARYEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"

class FixedSalaryEmployee : public Employee
{
    public:
        FixedSalaryEmployee( const std::string &, const std::string &, const std::string &, double = 0.0 );
        virtual ~FixedSalaryEmployee() { } // the virtual destructor
        void setMonthlySalary(double); // set the monthly salary
        double getMonthlySalary() const; // return the monthly salary

        // override the virtual functions in the abstract class Employee
        virtual double earnings() const override;
        virtual void print() const override;

    private:
        double monthlySalary;
};

#endif // FIXEDSALARYEMPLOYEE_H_INCLUDED
