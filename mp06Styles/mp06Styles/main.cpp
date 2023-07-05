#include <iostream>
#include <string>
#include <cstring>

using namespace std;


#include "Employee.h"
#include "Comparable.h"
#include "clone.h"
#include "SalaryEmployee.h"
#include "WageEmployee.h"
#include "InternEmployee.h"


const int SIZE = 3;

//call the toString

void printEmployees(Employee * p[], int size) 
{
    for (int i = 0; i < size; ++i)
    {
        cout << p[i]->toString() << endl;
    }
}
//sorts by name

void sortEmployees(Employee * p[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (strcmp(p[j]->getName(), p[j + 1]->getName()) > 0) 
            {
                Employee* temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

}

void sortEmployeesByPay(Employee * p[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (p[j]->computePay() > p[j + 1]->computePay()) 
            {
                Employee* temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}
// read from the user

void deleteEmployees(Employee* p[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        delete p[i];
        p[i] = nullptr;
    }

}

void readEmployees(Employee* p[], int size) {

      for (int i = 0; i < size; ++i) 
      {
        cout << "==========EMPLOYEE #" << i + 1 << "========" << endl;  
        cout << "Please input employee's name: ";        
        string s;
        getline(cin, s);
        
        double pay;
        cout << "Please input employee pay: ";
        cin >> pay;
        
        int income;
        cout << "Please input employee's income type:\n1) salary\n2) wage " << endl;
        cin >> income;
        cin.ignore();
//        bool b;
//        do
//        {
//            b = true;
            if (income == 1) 
            {
                double salary;
                cout << "Please enter employee's salary: ";
                cin >> salary;
                p[i] = new SalaryEmployee(s.c_str(), pay, salary);
            } 
            else if (income == 2) {
                double hours;
                cout << "Please enter employee's hours: ";
                cin >> hours;
                p[i] = new WageEmployee(s.c_str(), pay, hours);
            } 
            else 
            {
                cout << "Invalid response, please try again... " << endl;
                cin.ignore();
                cin.clear();
//                b = false;
            }
//        }
//        while(b);
    }

}

void poly1( Employee * p )
{
    cout << p->computePay()  << endl;
     cout << p->weeklyPay()  << endl;
}
void poly2( Employee &e )
{
    cout << e.computePay()  << endl;
    cout <<e.weeklyPay()  << endl;
}
void createAndDeleteObjects()
{
    SalaryEmployee se1;   
    string s = "john";
    SalaryEmployee se2( s.c_str(), 80000 , 2500);
    cout << "--------------------\n";
}
void createAndDeleteObjectsPointers()
{
    SalaryEmployee * pSe1  = new SalaryEmployee();   
    string s = "john";
    SalaryEmployee * pSe2 = new SalaryEmployee( s.c_str(), 80000 , 2500);
    cout << "--------------------\n";
    delete pSe1;
    delete pSe2;
}
int main(int argc, char** argv)
{
 //createAndDeleteObjects();
//createAndDeleteObjectsPointers();
    
    //Employee e1;
    /*
    string s = "mary";
    SalaryEmployee se1( s.c_str(), 123456 , 1000);
    //poly1( &e1);
     poly1( &se1);
    
    //Employee *pE1 = new Employee();
    s = "john";
    Employee * pEe2 = new SalaryEmployee( s.c_str(), 70000 , 300 ) ; 
    ((SalaryEmployee * ) pEe2)->setSalary( 1000000);
     cout << "salary is 1 million: " 
             << ((SalaryEmployee * ) pEe2)->getSalary()
             << endl;
    //poly1( pE1);
    poly1( pEe2);
    cout << "polymorphism via references\n";
    //poly2( e1);
    poly2( se1);
     */
   /*
    string s = "mary poppins";
    SalaryEmployee se1( s.c_str(), 888888 , 2000);
    
    s = "john wayne";
    SalaryEmployee se2( s.c_str(), 200000 , 333);
    
    SalaryEmployee se3 ( se2 );
    cout << se3.toString() << endl;
    
    SalaryEmployee se4; 
    se4 = se3 = se2 = se1;
    cout << se1.toString() << endl;
     */
  /*  
    Employee * p[SIZE];
    string s = "mary poppins";
    p[0] = new SalaryEmployee ( s.c_str(), 888888 , 2000);
    p[1] = new WageEmployee();
    
    s = "john wayne";
    p[2] = new SalaryEmployee ( s.c_str(), 200000 , 333);
    printEmployees( p , 3 );
    */
    
//   string s = "john wayne";
//   SalaryEmployee s4 ( s.c_str(), 200000 , 1000);
//   s = "paul newman";
//   SalaryEmployee s5 ( s.c_str(), 150000 , 1000);
//   cout << "s4 compareTo s4: " << s4.compareTo(s4)  << endl;
//   
//   cout << "s4 compareTo s5: "<< s4.compareTo(s5)  << endl;
//   cout << "s5 compareTo s4: " << s5.compareTo(s4)  << endl;
//   s = "Al Pacino";
//   WageEmployee we5( s.c_str(), 19.89, 2000);
//   s = "Robert DeNiro";
//   WageEmployee we6( s.c_str(), 21, 1990);
//   try
//   {
//   cout << "s5 compareTo w5: "<<  s5.compareTo(we5)  << endl;
//  
//   }
//   catch ( string & e)
//   {
//      cout << e << endl; 
//   }
//   cout << "w5 compareTo w6: " << we5.compareTo( we6)  << endl;
//   cout << "w6 compareTo w5: " << we6.compareTo( we5)  << endl;
    
    string s = "columbo";
    string s2 = "zenigata";
    InternEmployee ie1(s.c_str(), s2,  1968);
    cout << ie1.toString() <<endl;
    
    s = "lupin";
    s2 = "mako";
    InternEmployee ie2(s.c_str(), s2,  333333);
    cout << ie2.toString() <<endl;
    
    InternEmployee ie3(ie2);
    cout << ie3.toString() << endl;
    
    InternEmployee ie4;
    cout << ie4.toString() << endl;
    
    cout << "ie1 compareTo ie2: "<<  ie1.compareTo(ie2)  << endl;
    
    cout << "ie2 compareTo ie3: "<<  ie2.compareTo(ie3)  << endl;
    
    Employee * p = ie3.clone();
    cout << p->toString() << endl;
    cout << "weeklySalary: " << ((InternEmployee*)p)->getWeeklySalary() << endl;
    delete p;
    
   return 0;
}

