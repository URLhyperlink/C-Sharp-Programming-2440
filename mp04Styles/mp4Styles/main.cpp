/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: idont
 *
 * Created on March 27, 2023, 11:00 AM
 */

#include <cstdlib>
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <cstring>
#include <iostream>
using namespace std;
#include <iomanip>
#include "structures.h"
#include "structureTable.h"

//Employee readEmployee(Employee & e)//this is an alias of the original
//{
//    cout << "Enter employee's name: ";
//    string s;
//    //cin.ignore();
//    getline(cin, s);
//    e.pName = new char[s.size() + 1];
//    strcpy(e.pName, s.c_str());
//    
//    
//    cout << "Enter employee's address: ";
//    getline(cin, e.address);
//    cout << e.address << endl;
//    //cin >> e.address;
//    
//    cout << "\nEnter employee's salary: ";
//    cin >> e.salary;
//    cout << e.salary << endl;
//    return e;
//}
//
//void printEmployee(Employee e)//this is a duplicate structure of the ORIGINAL is given (TWO STRUCTURES)
//{
//    cout << "Employee name: " << e.pName << endl;
//    cout << "Employee address: " << e.address << endl;
//    cout << "Employee salary: " << e.salary << endl;
//    
//}
//
//Employee* readEmployee1()
//{
//    cout << "Enter employee's name: ";
//    string s;
//    //cin.ignore();
//    getline(cin, s);
//    char * pName = new char[s.size() + 1];
//    strcpy(pName, s.c_str());
//    
//    string address;
//    cout << "Enter employee's address: ";
//    getline(cin, address);
//    cout << address << endl;
//    //cin >> e.address;
//    
//    double salary;
//    cout << "\nEnter employee's salary: ";
//    cin >> salary;
//    cout << salary << endl;
//    Employee * p = new Employee(pName, address, salary);
//    return p;
//}
//
////Employee* readEmployee2(Employee * pE)
////{
////    
////}
//
//void printEmployeeAddress(Employee & e)
//{
//    
//}
//
//void readEmployeePointer(Employee * p)
//{
//    cout << "Enter employee's name: ";
//    string s;
//    //cin.ignore();
//    getline(cin, s);
//    //p.pName = new char[s.size() + 1];
//    strcpy(p->pName, s.c_str());
//    
//    
//    cout << "Enter employee's address: ";
//    getline(cin, p->address);
//    //cout << p->address << endl;
//    //cin >> e.address;
//    
//    cout << "\nEnter employee's salary: ";
//    cin >> p->salary;
//    //cout << p->salary << endl;
//    cin.ignore(80, '\n');
//}
//
//Employee** createArrayOfEmployees(int size)
//{
//    Employee** pp = new Employee*[size];
//    for(int i = 0 ; i < size; ++i)
//    {
//        //pp[i] = new Employee();
//        *(pp+i) = new Employee();
//    }
//    return pp;
//}
//
//void traverse(Employee** pp, int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        cout << (*(pp + i))->pName << " ";
//        cout << (*(pp + i))->address << " ";
//        cout << (*(pp + i))->salary << " ";
//        cout << endl;
//    }
//    
//}
//
//void freeArray(Employee** pp, int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        delete[i];
//    }
//}

int main(int argc, char** argv)
{
//    Employee e1;
//    Employee e2 = readEmployee(e1);
//    printEmployee(e1);
//
//    
//    printEmployee(e2);
//    e2.address = "New Orleans";    
//    strcpy(e2.pName, "Mary Poppins");
//    
//    cout << "======ORIGINAL==========" << endl;
//    printEmployee(e1);
//    delete[] e1.pName;
//    cout << "======COPY OF ORIGINAL======" << endl;
//    printEmployee(e2);
    
//    Employee* p = readEmployee1();
//    printEmployee(*p);
    
//    Employee e1;
//    readEmployee(e1);
//    printEmployee(e1);
    
//    Employee e2;
//    readEmployee(&e2);
//    printEmployee(e2);   
    
//    Employee *p = new Employee();
//    readEmployeePointer(p);
//    printEmployee(*p);
//    
//    Employee ar[2];
//    readEmployee(ar[0]);
//    printEmployee(ar[0]);
//    strcpy(ar[1].pName, "paulina");
//    ar[1].address = "123 Sunny Road Lafayette La, 70506";
//    ar[1].salary = 100000;
//    printEmployee(ar[1]);
//    
//    Employee **pp = createArrayOfEmployees(2);
//    readEmployee(*pp[0]);
//    printEmployee(*pp[0]);
//    strcpy(pp[1]->pName, "mary poppins");
//    pp[1]->address = "123 main road lafayette LA 70506";
//    pp[1]->salary = 200000;
//    printEmployee(*pp[1]);
//    cout << "---------------\n";
//    traverse(pp, 2);
    

    Person *** ppp = createTableOfPersons(3, 4);
    Person& test = *ppp[1][2];
    readIntoPerson(test);
    traversePerson(ppp, 3, 4);
    freePerson(ppp, 3, 4);
    freePersons(ppp, 3, 4);
    //traversePerson(ppp, 3, 4);
    return 0;
    
}
