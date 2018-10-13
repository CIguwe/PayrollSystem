#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>

class Employee
{
    public:
        Employee(const std::string &, const std::string&, const std::string &);
        virtual ~Employee() { } //this is a virtual destructor

        void setFirstName( const std::string & ); // set the first name
        std::string getFirstName() const; // return the first name

        void setLastName( const std::string & ); // set the last name
        std::string getLastName() const; // return the last name

        void setSocialSecurityNumber( const std::string &); // set the ssn
        std::string getSocialSecurityNumber() const; // return the ssn

        virtual double earnings() const = 0; //pure virtual function
        virtual void  print() const; // virtual function

    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
};
#endif // EMPLOYEE_H_INCLUDED
