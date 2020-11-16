/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: xWing
 *
 * Created on November 10, 2020, 9:22 PM
 */
#include <string>
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee{
    private:
        string name;
        string depart;
        string posit;
        int id;
    public:
        void dinfo(string, string, string, int); //Declares Info
        void display(); //Displays info
};


#endif /* EMPLOYEE_H */

