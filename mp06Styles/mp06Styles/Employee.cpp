#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Employee.h"

////////////////////////////////////////////////////////////////////////////////
    Employee::Employee()
    {
        //cout << "constructor Employee() called\n";
            
        this->pName = new char[10];
        strcpy(this->pName, " NO NAME" );
    
    }
    ////////////////////////////////////////////////////////////////////////////////
    Employee::Employee(Employee & e)
    {   
        //cout << "constructor Employee(Employee & e) called\n";
       this->pName = new char[  strlen(e.pName) + 1  ];
       strcpy(this->pName, e.pName );
    }
     Employee::Employee(const char* pName )
     {
       //cout << "constructor Employee(char* pName ) called\n";
       this->pName = new char[  strlen(   pName   ) + 1  ];
       strcpy(this->pName, pName );      
     }
    ////////////////////////////////////////////////////////////////////////////////
    Employee::~Employee(){
    //cout << "destructor Employee() called\n";
    if ( this->pName != nullptr)
            delete[] this->pName;
    }
////////////////////////////////////////////////////////////////////////////////
    char * Employee::getName()
    {
        return this->pName;
    }
////////////////////////////////////////////////////////////////////////////////
    void Employee::setName(const char* pName){ 
  
     if ( this->pName != nullptr)
            delete[] this->pName;
            
      this->pName = new char[  strlen(pName) + 1  ];
      strcpy(this->pName, pName ); 
    }
////////////////////////////////////////////////////////////////////////////////
    string Employee::toString()
    {
        string s = "Employee { ";
        s += this->pName;
        s += " }";
        return s;
    
    }
    ////////////////////////////////////////////////////////////////////////////////
      Employee &  Employee::operator=( Employee & other )
      {
          //cout << "assignment operator called\n";
          if ( this == &other)
          {
              cout << "object assigned to itself\n";
              return *this;
          }
          if ( this->pName != nullptr)
              delete[] this->pName;
              
          this->pName = new char[strlen( other.pName) + 1];
          strcpy( this->pName, other.pName);
          return *this; 
      }
      
      double Employee::computePay() 
      {
          //cout << "Employee::computePay() called\n";
          return -1;
      }

