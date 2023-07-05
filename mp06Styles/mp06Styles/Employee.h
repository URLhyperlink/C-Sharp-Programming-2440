/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   Employee.h
 * Author: ASDV1
 *
 * Created on April 21, 2023, 10:52 AM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee 
{
private:
    char * pName;
public:
    Employee();
    Employee(Employee &);
    Employee(const char* pName );
     ~Employee();
    char* getName();
    void setName(const char* Name); 
    virtual string toString();
    Employee & operator=( Employee & other);
    virtual double computePay();
    virtual double weeklyPay() = 0;//JAVA abstract method equivalent
   
};





#endif /* EMPLOYEE_H */

