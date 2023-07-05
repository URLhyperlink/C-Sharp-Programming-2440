/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Tucker
 *
 * Created on April 23, 2023, 9:35 PM
 */

#include <iostream>
#include <cstdlib>
#include "LandStruct.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

    LandStruct * test = new LandStruct();
    FeetInches * length = new FeetInches(12, 3);
    FeetInches * width = new FeetInches(5, 7);
    test->setWidth(width);
    test->setLength(length);
    cout << test->getLength() << endl;
    cout << test->getWidth() << endl;
    
    
}

