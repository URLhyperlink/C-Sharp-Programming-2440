/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   test3Darrays.h
 * Author: ASDV2
 *
 * Created on February 11, 2022, 2:29 PM
 */

#ifndef TEST3DARRAYS_H
#define TEST3DARRAYS_H
    int*** create3Darray( int numTables, int rows, int columns);
    void traverse3DArray( int ***ppp, int numTables , int rows, int columns);
    void   traverse3DArrayOffsets( int ***, int , int , int );
    void traverse3DArrayOffsets2( int ***, int , int , int );
   void traverse3DArrayOffsets3( int ***, int , int , int );


    void intialize3DArray( int ***ppp, int numTables , int rows, int columns);
    void delete3DArray( int ***ppp, int tables, int rows, int columns );


#endif /* TEST3DARRAYS_H */

