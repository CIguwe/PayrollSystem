#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "FixedSalaryEmployee.h"
#include "CommissionEmployee.h"
#include "BaseAndCommissionEmployee.h"
using namespace std;

 void virtualViaPointer( const Employee * const ); // prototype

 int main()
{
    // set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // create derived-class objects
    FixedSalaryEmployee fixedSalaryEmployee(
    "Meg", "Peters", "222-22-2222", 700 );
    CommissionEmployee commissionEmployee(
    "James", "Potter", "777-77-7777", 15000, .06 );
    BaseAndCommissionEmployee baseAndCommissionEmployee(
    "Dera", "Eben", "999-99-9999", 12000, .04, 500 );

    // create vector of three base-class pointers
    vector< Employee * > employees( 3 );
    // initialize vector with pointers to Employees
    employees[ 0 ] = &fixedSalaryEmployee;
    employees[ 1 ] = &commissionEmployee;
    employees[ 2 ] = &baseAndCommissionEmployee;

    // call virtualViaPointer to print each Employee's information
    // and earnings using dynamic binding
        for ( const Employee *employeePtr : employees )
            virtualViaPointer( employeePtr );
}

void virtualViaPointer( const Employee * const baseClassPtr )
{
        baseClassPtr->print();
        cout << "\nearned $" << baseClassPtr->earnings() << endl;
}
