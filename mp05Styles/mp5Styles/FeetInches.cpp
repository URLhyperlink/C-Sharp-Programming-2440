// Implementation file for the FeetInches class

using namespace std;
#include <cstdlib>      
#include "FeetInches.h"
//copied from textbook pdf
//************************************************************
// Definition of member function simplify. This function     *
// checks for values in the inches member greater than       *
// twelve or less than zero. If such a value is found,       *
// the numbers in feet and inches are adjusted to conform    *
// to a standard feet & inches expression. For example,      *
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.   *
//************************************************************


void FeetInches::simplify()
{
   if (inches >= 12)
   {
      feet += (inches / 12);
      inches = inches % 12;
   }
   else if (inches < 0)
   {
      feet -= ((abs(inches) / 12) + 1);
      inches = 12 - (abs(inches) % 12);
   }
}

void FeetInches::setFeet(int f) 
    {
        this->feet = f;
    }

    void FeetInches::setInches(int i) 
    {
        this->inches = i;
    }

    // Accessor functions

    int FeetInches::getFeet() 
    {
        return this->feet;
    }

    int FeetInches::getInches() 
    {
        return this->inches;
    }

//**********************************************
// Overloaded binary + operator.               *
//**********************************************

//FeetInches & FeetInches::operator + (const FeetInches &right)
//{
//   FeetInches temp;
//
//   temp.inches = inches + right.inches;
//   temp.feet = feet + right.feet;
//   temp.simplify();
//   return temp;
//}
//
////**********************************************
//// Overloaded binary - operator.               *
////**********************************************
//
//FeetInches FeetInches::operator - (const FeetInches &right)
//{
//   FeetInches temp;
//
//   temp.inches = inches - right.inches;
//   temp.feet = feet - right.feet;
//   temp.simplify();  
//   return temp;
//} 

string FeetInches::toString()
{
    int feetToInches = this->feet * 12;
    int sum = this->feet + this->inches;
    string s = feetToInches + " inches";
    
}