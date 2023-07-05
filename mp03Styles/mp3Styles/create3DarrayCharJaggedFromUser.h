/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   create3DarrayCharJaggedFromUser.h
 * Author: idont
 *
 * Created on March 17, 2023, 11:10 AM
 */

#ifndef CREATE3DARRAYCHARJAGGEDFROMUSER_H
#define CREATE3DARRAYCHARJAGGEDFROMUSER_H

/** creates and populates from the user  
 The user can enter a phrase, words separated by blank(s).
 * @param  rows numbers of rows ( words from the user
 * @return 2D jagged array
 */
char*** create3DarrayCharJaggedFromUser( int tables, int rows);
void traverse3DCharJagged( char*** ppp, int tables, int rows);
void freeMemory3DCharJagged( char*** ppp, int tables,int rows);

/* sorts each table individually in ascending order*/
//use strcmp to compare pointer chars
void sort3DCharJagged(char*** ppp, int tables,int rows); 

/* reverses each word in a phrase
 * abc hello my friend ----becomes
 * cba  olleh   ym    dneirf  
 */
void reverse3DCharJagged(char*** ppp, int tables,int rows); 

#endif /* CREATE3DARRAYCHARJAGGEDFROMUSER_H */

