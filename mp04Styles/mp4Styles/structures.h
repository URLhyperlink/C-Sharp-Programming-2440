/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   structures.h
 * Author: idont
 *
 * Created on March 27, 2023, 10:03 AM
 */



#ifndef STRUCTURES_H


struct Employee
{
    char * pName;
    string address;
    double salary;
    Employee() {pName = new char[50];}
    Employee(char * p, string a, double s)
    {
        cout << "constructor 3 parms called\n";
        pName = new char[strlen(p) + 1];
        strcpy(pName, p);
        address = a;
        salary = s;
    };
    ~Employee()
    {
        cout << "destructor called\n";
        if(pName != nullptr)
        {
            delete[] pName;
        }
    }
};

Employee readEmployee(Employee & e);
        
void printEmployee(Employee e);

Employee* readEmployee1();
void readEmployee2(Employee * pE);

Employee** createArrayOfEmployees(int size);
void traverse(Employee** pp, int size);
void freeArray(Employee** pp, int size);

#endif /* STRUCTURES_H */

