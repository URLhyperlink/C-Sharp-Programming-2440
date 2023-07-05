#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Employee.h"
#include "Comparable.h"
#include "clone.h"
#include "WageEmployee.h"
//////////////////////////////////

WageEmployee::WageEmployee()
{
    this->wage = 0;
    this->hours = 0;
}
//////////////////////////////////

WageEmployee::WageEmployee(const char * pName, double wage, int hours)
: Employee(pName)
{
    this->hours = hours;
    this->wage = wage;
}
//////////////////////////////////

WageEmployee::WageEmployee(WageEmployee & we)
: Employee(we.getName())
{
    this->hours = we.hours;
    this->wage = we.wage;
}
//////////////////////////////////

WageEmployee::~WageEmployee()
{

}
//////////////////////////////////

WageEmployee & WageEmployee::operator=(WageEmployee & other)
{
    if (this == &other)
        return *this;

    this->setName(other.getName());
    this->hours = other.hours;
    this->wage = other.wage;


    return *this;
}
//////////////////////////////////   

int WageEmployee::getHours() const
{
    return this->hours;
}
//////////////////////////////////

void WageEmployee::setHours(int hours)
{
    this->hours = hours;
}
//////////////////////////////////

double WageEmployee::getWage() const
{
    return this->wage;
}
//////////////////////////////////

void WageEmployee::setWage(double wage)
{
    this->wage = wage;
}
//////////////////////////////////

string WageEmployee::toString()
{
    string s = "Employee { ";
    s += this->getName();
    s += " }";
    s += " WageEmployee { ";
    s += to_string(this->wage) + " ";
    s += to_string( this->hours ) + " ";
    s += " }";
    return s;
}
//////////////////////////////////

double WageEmployee::computePay()
{
    return this->hours * this->wage;
}

double WageEmployee::weeklyPay()
{
    return computePay()/52;
}

int WageEmployee::compareTo(Employee & other)
{
    string s = typeid ( other).name();
    if (s.find("WageEmployee") == string::npos)//if not found ( i.e. string::npos  is the maximum possible position
        throw "Exception " + other.toString() + " is not an WageEmployee object";
    cout << s << endl;
    WageEmployee *pOther = (WageEmployee*) & other;
    int comparisonOfNames = strcmp(this->getName(), pOther->getName());
    if (comparisonOfNames == 0)
        return ( this->hours + this->hours - pOther->wage - this->wage);
    else
        return comparisonOfNames;
}

Employee * WageEmployee::clone()
{
    return new WageEmployee(this->getName(), this->wage, this->hours);
}