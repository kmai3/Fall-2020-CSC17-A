/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Daysoftheyear.h
 * Author: xWing
 *
 * Created on November 10, 2020, 10:17 PM
 */
#include <string>
using namespace std;
#ifndef DAYSOFTHEYEAR_H
#define DAYSOFTHEYEAR_H
class Daysoftheyear{
    private:
        int nday;
        string month;
        int day;
    public:
        void getinfo();
        void prnt();
};

#endif /* DAYSOFTHEYEAR_H */

