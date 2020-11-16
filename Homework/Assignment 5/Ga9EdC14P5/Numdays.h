/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Numdays.h
 * Author: xWing
 *
 * Created on November 10, 2020, 10:59 PM
 */
#include <string>
using namespace std;
#ifndef NUMDAYS_H
#define NUMDAYS_H
class Numdays{
    private:
        int maxsick; //Max Sick Leave
        int sick; //Sick Leave
        int maxvac; //Max Vacation Time
        int vac; //Vacation Time
        int munpaid; //max unpaid
        int unpaid; //unpaid time
        string name;
        int id;
    public:
        void getinfo();
        void prnt();
};


#endif /* NUMDAYS_H */

