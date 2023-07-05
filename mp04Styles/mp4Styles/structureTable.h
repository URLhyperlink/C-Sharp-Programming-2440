/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   structureTable.h
 * Author: idont
 *
 * Created on March 31, 2023, 11:41 AM
 */

#ifndef STRUCTURETABLE_H
#define STRUCTURETABLE_H

struct Person
{
    char * pName;
    string friends[2];
    int phone;
    
    Person(char * name, string friend1, string friend2, int phoneNum) {
        pName = name;
        friends[0] = friend1;
        friends[1] = friend2;
        phone = phoneNum;
    }
    
     Person() 
     {
        pName = new char[50];
        friends[0] = new char[50];
        friends[1] = new char[50];
        phone = 0;
    }


    ~Person() 
    {
        if(pName != nullptr)
        {
            delete[] pName;
        }
    }
};
Person *** createTableOfPersons(int rows, int columns); //creates 2d array/table of persons 

void traversePerson(Person*** ppp, int rows, int columns);//traverses the table and prints Person and properties

void readIntoPerson(Person & p);//sets selected Person properties w/ address 

void freePerson(Person*** ppp, int rows, int columns); //frees memory from selected Person

void freePersons(Person*** ppp, int rows, int columns); //frees memory from whole table

#endif /* STRUCTURETABLE_H */

