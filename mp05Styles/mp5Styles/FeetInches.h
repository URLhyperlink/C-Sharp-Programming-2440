/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   FeetInches.h
 * Author: Tucker
 *
 * Created on April 23, 2023, 9:44 PM
 */

using namespace std;
#include <string>

#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches {
private:
    int feet; // To hold a number of feet
    int inches; // To hold a number of inches
    void simplify(); // Defined in FeetInches.cpp
    
public:
    // Constructor

    FeetInches() 
    {
        this->feet = 0;
        this->inches = 0;
    }
    
    FeetInches(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    // Mutator functions

    void setFeet(int f);

    void setInches(int i);

    // Accessor functions

    int getFeet();

    int getInches();

    // Overloaded operator functions
    FeetInches operator+(const FeetInches &); // Overloaded +
    FeetInches operator-(const FeetInches &); // Overloaded -
    
    string toString();
};

#endif /* FEETINCHES_H */

