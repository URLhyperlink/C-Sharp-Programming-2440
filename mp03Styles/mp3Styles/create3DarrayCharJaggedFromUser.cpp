/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include "create3DarrayCharJaggedFromUser.h"

char*** create3DarrayCharJaggedFromUser(int tables, int rows) 
{
    char *** ppp = new char **[tables];
    for (int i = 0; i < tables; ++i) 
    {
        ppp[i] = new char*[rows]; //allocate memory for new string 
        string s;
        for (int j = 0; j < rows; ++j) 
        {
            cout << "Type a phrase  and press enter for table " << (i + 1) << " of " << tables
                    << " row " << (j + 1) << " of " << rows << " : ";
            getline(cin, s);
            cout << " you typed: " + s << endl;
            char* temp = new char[s.size() + 1];
            copy(s.begin(), s.end(), temp);
            temp[s.size()] = '\0'; //end of string
            ppp[i][j] = temp;
            
        }
    }
    return ppp;
}
////////////////////////////////////////////////////////////////////////////////

void traverse3DCharJagged( char*** ppp, int tables, int rows)
{
    //cout << "tables= " << tables << " " << endl;
    //cout << "rows= " << rows << " " << endl;
    for (int i = 0; i < tables; i++) 
    {
        //cout << "inside for(i) " << i << " < " << tables << " ? " << endl;
        for (int j = 0; j < rows; j++) 
        {
            //cout << "inside for(j) " << j << " < " << rows << " ? " << endl;
            for (int k = 0; ppp[i][j][k] != '\0'; k++) 
            {
                cout << ppp[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
////////////////////////////////////////////////////////////////////////////////

void freeMemory3DCharJagged(char*** ppp, int tables, int rows)
{
    for (int i = 0; i < tables; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            delete[] ppp[i][j];//delete rows
        }
        delete[] ppp[i];//deleter tables
    }
    delete[] ppp;//DELETEST ALL
    cout << "ppp has been deleted" << endl;
}
////////////////////////////////////////////////////////////////////////////////

/* sorts each table individually in ascending order*/
//use strcmp to compare pointer chars

void sort3DCharJagged(char*** ppp, int tables, int rows) 
{
    for (int i = 0; i < tables; i++) 
    {
        for (int j = 0; j < rows - 1; j++) 
        {
            for (int k = j + 1; k < rows; k++) 
            {
                if (strcmp(ppp[i][j], ppp[i][k]) > 0)//compares 
                {
                    char* temp = ppp[i][j];
                    ppp[i][j] = ppp[i][k];
                    ppp[i][k] = temp;//swap
                }
            }
        }
        
        for (int k = 0; k < rows; ++k)//prints 
        {
            cout << ppp[i][k] << endl;
            cout << "----------------------" << endl;
        }        
    }
    
}
////////////////////////////////////////////////////////////////////////////////

/* reverses each word in a phrase
 * abc hello my friend ----becomes
 * cba  olleh   ym    dneird  
 */
void reverse3DCharJagged(char*** ppp, int tables, int rows) 
{
    for (int i = 0; i < tables; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            //int length = strlen(ppp[i][j]); strlen() part of string???
            int length = 0;
            while (ppp[i][j][length] != '\0') 
            {
                length++;
            }
            for (int k = 0; k < length / 2; k++) 
            {
                char temp = ppp[i][j][k];
                //cout << "ppp[i][j][k]= " << ppp[i][j][k] << endl;
                //cout << "ppp[i][j][length - k - 1]= " << ppp[i][j][length - k - 1] << endl;
                ppp[i][j][k] = ppp[i][j][length - k - 1];
                ppp[i][j][length - k - 1] = temp;
            }
            
        }
        for (int k = 0; k < rows; ++k)//prints 
        {
            cout << ppp[i][k] << endl;
            cout << "----------------------" << endl;
        }      
    }
}


