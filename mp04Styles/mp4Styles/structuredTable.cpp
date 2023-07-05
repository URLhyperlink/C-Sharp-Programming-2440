/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <cstring>
#include <string>
#include<iostream>
using namespace std;
#include "structures.h"
#include "structureTable.h"

Person *** createTableOfPersons(int rows, int columns) 
{
    Person *** ppp = new Person **[rows];

    for (int i = 0; i < rows; i++) {
        ppp[i] = new Person *[columns];

        for (int j = 0; j < columns; j++) 
        {
            ppp[i][j] = new Person();
//            string name = "Blank Name(" + to_string(i) + ", " + to_string(j) + ")";
//            ppp[i][j]->pName = new char[name.length() + 1];                
//            strcpy(ppp[i][j]->pName, name.c_str());
//                string friend1 = "Blank Friend[0] (" + to_string(i) + ", " + to_string(j) + ")";
//            ppp[i][j]->friends[0] = friend1;
//                string friend2 = "Blank Friend[1] (" + to_string(i) + ", " + to_string(j) + ")";
//            ppp[i][j]->friends[1] = friend2;
//            ppp[i][j]->phone = i + j;
            
        }
    }

    return ppp;
}

void traversePerson(Person*** ppp, int rows, int columns)
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            Person * p = ppp[i][j];
            cout << "Name: " << ppp[i][j]->pName << "\nFriend 1: " << ppp[i][j]->friends[0] << "\nFriend 2: " << ppp[i][j]->friends[1] << "\nPhone: " << ppp[i][j]->phone << endl;
        }
    }
}

void readIntoPerson(Person & p)
{
    cout << "Enter employee's name: ";
    string s;
    int num;
    //cin.ignore();
    getline(cin, s);
    p.pName = new char[s.size() + 1];
    strcpy(p.pName, s.c_str());
    
    cout << "\nEnter person's friend 1: ";
    getline(cin, p.friends[0]);
    //cout << e.address << endl;
    //cin >> e.address;
    
    cout << "\nEnter person's friend 2: ";
    cin.ignore();
    getline(cin, p.friends[1]);
    //cout << p.friends[0] << endl;
    
    cout << "\nEnter person's phone: ";
    cin >> p.phone;
    //cout << p.phone << endl;
    cin.ignore();
}

void freePerson(Person*** ppp, int rows, int columns)
{
    Person * p = ppp[rows][columns];
    delete[] p->pName;
    delete p;
    ppp[rows][columns] = nullptr;
}


void freePersons(Person*** ppp, int rows, int columns)
{
    //cout << "DELETE PERSON START" << endl;
    for (int i = 0; i < rows; i++) 
    {
        //cout << "DELETE PERSON I" << endl;
        for (int j = 0; j < columns; j++) 
        {
            //cout << "DELETE PERSON J" << endl;            
            delete[] ppp[i][j]->pName;
        }
        delete[] ppp[i];
    }
    delete[] ppp;
}