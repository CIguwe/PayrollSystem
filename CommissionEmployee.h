#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"

class CommissionEmployee : public Employee
 {
    public:
        CommissionEmployee( const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0 );
        virtual ~CommissionEmployee() { } // the virtual destructor

        void setCommissionRate( double ); // set the commission rate
        double getCommissionRate() const; // return the commission rate

        void setGrossSales( double ); // set the gross sales amount
        double getGrossSales() const; // return the gross sales amount

        // override the virtual functions in the abstract class Employee
        virtual double earnings() const override;
        virtual void  print() const override;
    private:
        double grossSales; // gross weekly sales
        double commissionRate; // commission percentage
};
#endif // COMMISSIONEMPLOYEE_H_INCLUDED

