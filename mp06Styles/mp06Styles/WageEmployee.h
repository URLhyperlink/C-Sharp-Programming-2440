/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   WageEmployee.h
 * Author: ASDV1
 *
 * Created on April 24, 2023, 11:37 AM
 */

#ifndef WAGEEMPLOYEE_H
#define WAGEEMPLOYEE_H

class WageEmployee : public Employee, public Comparable, public Cloneable {
private:
    double wage;
    int hours;
    
public:
    WageEmployee();
    WageEmployee(const char * pName, double wage, int hours);
    WageEmployee( WageEmployee & );
    ~WageEmployee();
    WageEmployee & operator=( WageEmployee & other); 
    
    int getHours() const; 
    void setHours(int hours);
    double getWage() const;
    void setWage(double wage);
    
    string toString();  
    virtual double computePay();
    virtual double weeklyPay();
    int compareTo( Employee &);
    virtual Employee* clone();
};

#endif /* WAGEEMPLOYEE_H */

