/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bdata.h
 * Author: xWing
 * Purpose: Banking Data
 * Created on October 20, 2020, 1:07 PM
 */

#ifndef BDATA_H
#define BDATA_H
struct Bdata{
    float *checks; //Array for Checks
    float *deposit; //Array for Deposits
    int ncheck; //Amount of Checks wrote
    int ndepo; //Amount of deposits done
    int totalc; //Total of Checks
    int totald; //Total of Deposits
    int bal; //Balance at the Beginning of the Month
};


#endif /* BDATA_H */

