/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include <iostream>
#include <cstring>
#include "create2DarrayCharJaggedFromUser.h"
using namespace std;

char** create2DarrayCharJaggedFromUser(int rows)
{
    char**pp = new char*[rows];
    string s;
    for(int i = 0; i < rows; i++)
    {
        cout << "Type a name: " << (i + 1) << " of " << rows << ": ";
        cin >> s;
        pp[i] = new char[s.size() + 1];
        strcpy(pp[i], s.c_str());
    }
    return pp;
}

void traverseCharJagged(char** pp, int rows)
{
    for(int i = 0; i < rows; i++)
    {
        cout << pp[i] << endl;
    }
}

void freeMemoryCharJagged(char** pp, int rows)
{
    for(int i = 0; i < rows; i++)
    {
        delete[] pp[i];
    }
}