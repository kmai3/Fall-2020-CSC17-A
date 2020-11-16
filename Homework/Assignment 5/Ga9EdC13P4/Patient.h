/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: xWing
 *
 * Created on November 10, 2020, 8:09 PM
 */
#include <string>
using namespace std;
#ifndef PATIENT_H
#define PATIENT_H
class Patient{
    private:
    string fname;
    string mname;
    string lname;
    string ename;
    string address;
    string city;
    string state;
    int zcode;
    string enumber;
public:
    void getinfo();
    void prnt();
};


#endif /* PATIENT_H */

