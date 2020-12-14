/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductionWorker.h
 * Author: xWing
 *
 * Created on December 3, 2020, 6:53 PM
 */
#include "Employee.h"
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
class Prowork : public Employee
{
private:
    float hrpay;
    int shift;
    float payment;
public:
    //Default constructor
    Prowork()
    {
        shift=0;
        hrpay=0;
    }
    //Constructor 
    Prowork(float hours, int shift){
        calc(hours, shift);
    }
    //Mutator Function
    void calc(float, int);
    //Accessor Function
    void discalc();
};


#endif /* PRODUCTIONWORKER_H */

