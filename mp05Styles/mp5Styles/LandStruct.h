/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   LandStruct.h
 * Author: Tucker
 *
 * Created on April 23, 2023, 9:42 PM
 */

#include "FeetInches.h"
#include <string>

#ifndef LANDSTRUCT_H
#define LANDSTRUCT_H

class LandStruct 
{
private:
    int area;
    FeetInches * length;
    FeetInches * width;
public:
    //constructors/destructors
    LandStruct();
    LandStruct(LandStruct &); 
    LandStruct(int lengthFeet, int lengthInches, int widthFeet, int widthInches);
    ~LandStruct(); 
    
    //getters/setters
    FeetInches* getLength();
    void setLength(FeetInches* length);
    FeetInches* getWidth();
    void setWidth(FeetInches* width);
    int getArea();
    void setArea(FeetInches* area);
    
    int getFeet();
    void setFeet(int feet);
    int getInches();
    void setInches(int inches);
    
//    operator overriders
    LandStruct & operator=( LandStruct & other);
    bool & operator==(LandStruct & other);
    
//    string toString();
};

#endif /* LANDSTRUCT_H */

