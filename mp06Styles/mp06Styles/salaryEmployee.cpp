#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
using namespace std;
#include "Employee.h"
#include "Comparable.h"
#include "clone.h"
#include "SalaryEmployee.h"
///////////////////////////////////////////////////////////////////

SalaryEmployee::SalaryEmployee()
//:Employee()
{
    this->pF = new float;
    *(this->pF) = 1.2345;
    //cout << "constructor SalaryEmployee() called\n";
}
///////////////////////////////////////////////////////////////////

SalaryEmployee::SalaryEmployee(const char * pName, int salary, int bonus)
: Employee(pName)
{
    this->salary = salary;
    this->bonus = bonus;
    this->pF = new float;
    *(this->pF) = 3.14;
    //cout << "constructor SalaryEmployee( char * pName, int salary, int bonus)called\n";
}
///////////////////////////////////////////////////////////////////

SalaryEmployee::~SalaryEmployee()
{
    delete this->pF;
    //cout << "destructor SalaryEmployee() called\n";

}
///////////////////////////////////////////////////////////////////

double SalaryEmployee::computePay()
{
    //cout << "SalaryEmployee::computePay() called\n";
    return this->salary + this->bonus;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SalaryEmployee::weeklyPay()
{
    //cout << "SalaryEmployee::weekelyPay() called\n";
    return this->salary / 52;
}
///////////////////////////////////////////////////////////////////

SalaryEmployee::SalaryEmployee(SalaryEmployee & e)
: Employee(e.getName())
{
    this->salary = e.salary;
    this->bonus = e.bonus;
    this->pF = new float;
    if (this->pF == nullptr)
        throw new bad_alloc();
    *this->pF = *e.pF;
}

double SalaryEmployee::getWeeklySalary()
{
    //double sal = this->weeklySalary()
    return this->weeklyPay();
}
void SalaryEmployee::setWeeklySalary(double weeklySalary)
{
    this->weeklySalary = weeklySalary;
}

SalaryEmployee & SalaryEmployee::operator=(SalaryEmployee & other)
{
    if (this == &other)
        return *this;

    this->setName(other.getName());
    this->salary = other.salary;
    this->bonus = other.bonus;
    this->pF = new float;
    *this->pF = *other.pF;

    return *this;
}
///////////////////////////////////////////////////////////////////

string SalaryEmployee::toString()
{
    string s = "Employee { ";
    s += this->getName();
    s += " }";
    s += " SalaryEmployee { ";
    s += to_string(this->salary) + " ";
    s += to_string(this->bonus) + " ";
    s += to_string(*this->pF) + " ";
    s += " }";
    return s;

}

int SalaryEmployee::compareTo(Employee & other)
{
    string s = typeid ( other).name();
    if (s.find("SalaryEmployee") == string::npos)//if not found ( i.e. string::npos  is the maximum possible position
        throw "Exception " + other.toString() + " is not an SalaryEmployee object";
    
    SalaryEmployee *pOther = (SalaryEmployee*) & other;
    int comparisonOfNames = strcmp(this->getName(), pOther->getName());
    if (comparisonOfNames == 0)
        return ( this->salary + this->bonus - pOther->salary - this->bonus);
    else
        return comparisonOfNames;
}

Employee* SalaryEmployee::clone()
{
    return new SalaryEmployee(this->getName(), this->salary, this->bonus);
}
