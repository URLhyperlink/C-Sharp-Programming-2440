/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   InternEmployee.h
 * Author: Tucker
 *
 * Created on April 28, 2023, 8:36 PM
 */

#ifndef INTERNEMPLOYEE_H
#define INTERNEMPLOYEE_H

class InternEmployee : public Employee, public Comparable, public Cloneable {
private:
    char * pSupervisorName;
    int weeklySalary;
public:
    InternEmployee();
    InternEmployee(const char * pName, string supervisorName, int weeklySalary);
    InternEmployee(InternEmployee &);
    ~InternEmployee();
    
    string getSupervisorName() const;
    void setSupervisorName(string supervisorName);
    int getWeeklySalary() const;
    void setWeeklySalary(int weeklySalary);
    
    double computePay();
    double weeklyPay();
    
    InternEmployee & operator=(InternEmployee & other);
    InternEmployee & operator=(SalaryEmployee & other);
    
    string toString();
    int compareTo(Employee &);
    virtual Employee* clone();
};

#endif /* INTERNEMPLOYEE_H */

