/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procedure.h
 * Author: xWing
 *
 * Created on November 10, 2020, 8:12 PM
 */
#include <string>
using namespace std;
#ifndef PROCEDURE_H
#define PROCEDURE_H
class Procedure{
    private:
    string oper;
    string date;
    string doc;
    float charge;
    public:
    void getinfo();
    void prnt();
        
};


#endif /* PROCEDURE_H */

