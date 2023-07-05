/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   SalaryEmployee.h
 * Author: ASDV1
 *
 * Created on April 24, 2023, 9:35 AM
 */

#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H

class SalaryEmployee :  public Employee, public Comparable, public Cloneable
{
    private:
        int salary;
        int bonus;
        float *pF;
        double weeklySalary;
    public:
        SalaryEmployee();

        SalaryEmployee( const char * pName, int salary, int bonus);
        ~SalaryEmployee();
    int getBonus() const {
        return bonus;
    }

    void setBonus(int bonus) {
        this->bonus = bonus;
    }

    int getSalary() const {
        return salary;
    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    double getWeeklySalary();
    void setWeeklySalary(double weeklySalary);

        virtual double computePay();
        virtual double weeklyPay();
        
       SalaryEmployee( SalaryEmployee & );
       SalaryEmployee & operator=( SalaryEmployee & other);   
       string toString();
       int compareTo( Employee &);
       virtual Employee* clone();
        
       SalaryEmployee & operator()(Employee & e)    
       {
         return *this;  
       }
       
       
};

#endif /* SALARYEMPLOYEE_H */

