/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   create2DarrayCharJaggedFromUser.h
 * Author: idont
 *
 * Created on March 17, 2023, 10:22 AM
 */

#ifndef CREATE2DARRAYCHARJAGGEDFROMUSER_H
#define CREATE2DARRAYCHARJAGGEDFROMUSER_H

#ifdef __cplusplus
extern "C" {
#endif

char** create2DarrayCharJaggedFromUser(int rows);
    
    void populateChar(char**pp, int rows, int columns);
    
    void traverseCharJagged(char**pp, int rows);
    
    //void traverseCharSingleLoop(char**pp, int rows);
    
    void freeMemoryCharJagged(char**pp, int rows);


#ifdef __cplusplus
}
#endif

#endif /* CREATE2DARRAYCHARJAGGEDFROMUSER_H */

