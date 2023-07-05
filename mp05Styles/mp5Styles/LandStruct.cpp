/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

using namespace std;
#include "LandStruct.h"

LandStruct::LandStruct() {
    this->length = new FeetInches();
    this->width = new FeetInches();
};

LandStruct::LandStruct(LandStruct & e) {
    this->length = e.length;
    this->width = e.width;
};

LandStruct::LandStruct(int lengthFeet, int lengthInches, int widthFeet, int widthInches) {
    int feetToInches = lengthFeet * 12;
    this->set = feetToInches + lengthInches;
    feetToInches = widthFeet * 12;
    this->width = feetToInches + widthInches;
};

LandStruct::~LandStruct() {
    if (this->length != nullptr) {
        delete this->length;
    }

    if (this->width != nullptr) {
        delete this->width;
    }
};

//getters/setters

FeetInches* LandStruct::getLength() {
    return this->length;
}

void LandStruct::setLength(FeetInches* pLength) {
    if (this->length != nullptr) {
        delete this->length;
    }
    this->length = pLength;
}

FeetInches* LandStruct::getWidth() {
    return this->width;
}

void LandStruct::setWidth(FeetInches* pWidth) {
    if (this->width != nullptr) {
        delete this->width;
    }

    this->width = pWidth;
}

//FeetInches & LandStruct::getFeet() 
//{
//    return FeetInches::getFeet();
//}
//
//void LandStruct::setFeet(int feet) 
//{
//    FeetInches::setFeet(feet);
//}
//
//FeetInches & LandStruct::getInches() 
//{
//    return FeetInches::getInches();
//}
//
//void LandStruct::setInches(int inches) 
//{
//    FeetInches::setInches(inches);
//}

//operator overriders
LandStruct & LandStruct::operator=(LandStruct & other)
{
    *length = *other.length;
            *width = *other.width;
        }
        return *this;
}


LandStruct & LandStruct::operator=( LandStruct & other )
      {
          cout << "assignment operator called\n";
          if ( this == &other)
          {
              cout << "object assigned to itself\n";
              return *this;
          }
          if ( this->length != nullptr)
              delete this->length;
          if ( this->width != nullptr)
              delete this->width;
              
          
          return *this; 
      }

bool & LandStruct::operator==(LandStruct& other) {
    //return ((this->length == other->length) && (this->width == other->width));
    return ((this->*length == other->*length) && (this->*width == other->*width));
//    return ((this->getLength() == other->getLength()) && (this->getWidth() == other->getWidth()));
}

//misc methods
string LandStruct::toString()
{
        string s = "LandStruct { ";
        s += "length: " + this->length + " ";
        s += "width: " + this->width + " ";
        s += "area: " + this->area + " }";
        return s;
}

bool LandStruct::operator == (const LandStruct & other)
{
	bool out;

	if (this->area == other.area)
	{
		out = true;
	}
	else
	{
		out = false;
	}

	return out;
}

int LandStruct::calculateArea()
{
    this->area = this->length * this->width; //need to convert FeetInches to int
    return this->area;
}