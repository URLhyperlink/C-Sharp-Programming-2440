#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
using namespace std;
#include "Employee.h"
#include "Comparable.h"
#include "clone.h"
#include "SalaryEmployee.h"
#include "InternEmployee.h"
///////////////////////////////////////////////////////////////////

InternEmployee::InternEmployee() : Employee()
{
    this->pSupervisorName = new char[10];
    strcpy(this->pSupervisorName, "NO NAME");
    this->weeklySalary = 0;
}

InternEmployee::InternEmployee(const char* pName, string supervisorName, int weeklySalary) : Employee(pName)
{
    this->pSupervisorName = new char[supervisorName.size() + 1];
    strcpy(this->pSupervisorName, supervisorName.c_str());
    this->weeklySalary = weeklySalary;
}

InternEmployee::InternEmployee(InternEmployee& other) : Employee(other)
{
    this->pSupervisorName = new char[strlen(other.pSupervisorName) + 1];
    strcpy(this->pSupervisorName, other.pSupervisorName);
    this->weeklySalary = other.weeklySalary;
}

InternEmployee::~InternEmployee()
{
    if (this->pSupervisorName != nullptr)
    {
        delete[] this->pSupervisorName;
    }
    cout << "\ndestructor InternEmployee() called" << endl;
}

string InternEmployee::getSupervisorName() const
{
    return string(this->pSupervisorName);
}

void InternEmployee::setSupervisorName(string s)
{
    if (this->pSupervisorName != nullptr)
    {
        delete[] this->pSupervisorName;
    }
    this->pSupervisorName = new char[s.size() + 1];
    strcpy(this->pSupervisorName, s.c_str());
}

int InternEmployee::getWeeklySalary() const
{
    return this->weeklySalary;
}

void InternEmployee::setWeeklySalary(int weeklySalary)
{
    this->weeklySalary = weeklySalary;
}

double InternEmployee::computePay()
{
    return this->weeklyPay() * 4;
}

double InternEmployee::weeklyPay()
{
    return this->weeklySalary * 0.8;
}

InternEmployee& InternEmployee::operator=(InternEmployee& other)
{
    if (this == &other)
    {
        cout << "object assigned to itself\n";
        return *this;
    }
    Employee::setName(other.getName());
    if (this->pSupervisorName != nullptr)
    {
        delete[] this->pSupervisorName;
    }
    this->pSupervisorName = new char[strlen(other.pSupervisorName) + 1];
    strcpy(this->pSupervisorName, other.pSupervisorName);
    this->weeklySalary = other.weeklySalary;
    return *this;
}

InternEmployee& InternEmployee::operator=(SalaryEmployee& other)
{
    this->weeklySalary = (int)(other.getWeeklySalary() / 52.0);
    return *this;
}

string InternEmployee::toString()
{
    string s = "InternEmployee { ";
    s += Employee::toString();
    s += ", ";
    s += this->pSupervisorName;
    s += ", ";
    s += to_string(weeklySalary);
    s += " }";
    return s;
}

int InternEmployee::compareTo(Employee & other)
{
    string s = typeid ( other).name();
    if (s.find("InternEmployee") == string::npos)//if not found ( i.e. string::npos  is the maximum possible position
        throw "Exception " + other.toString() + " is not an InternEmployee object";
    
    InternEmployee *pOther = (InternEmployee*) & other;
    int comparisonOfNames = strcmp(this->getName(), pOther->getName());
    if (comparisonOfNames == 0)
        return (this->weeklySalary - pOther->weeklySalary);
    else
        return comparisonOfNames;
}

Employee* InternEmployee::clone()
{
    return new InternEmployee(this->getName(), this->pSupervisorName, this->weeklySalary);
}