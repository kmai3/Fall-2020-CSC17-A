/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.h
 * Author: xWing
 *
 * Created on December 3, 2020, 9:17 PM
 */

#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
class MilTime : public Time{
public:
    MilTime(){
        Time(0, 0, 0);
    }
    MilTime(int h, int m, int s){
        Time(h, m, s);
    }
};


#endif /* MILTIME_H */

