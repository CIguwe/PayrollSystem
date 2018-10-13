#ifndef BASEANDCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEANDCOMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "CommissionEmployee.h"

class BaseAndCommissionEmployee : public CommissionEmployee
{
    public:
        BaseAndCommissionEmployee( const std::string &, const std::string &,
                                  const std::string &, double = 0.0, double = 0.0, double = 0.0 );
        virtual ~BaseAndCommissionEmployee() { } // the virtual destructor
        void setBaseSalary( double ); // set the base salary
        double getBaseSalary() const; // return the base salary
    // keyword virtual signals intent to override
        virtual double earnings() const override;
        virtual void print() const override;
    private:
        double baseSalary;
};
#endif // BASEANDCOMMISSIONEMPLOYEE_H_INCLUDED
