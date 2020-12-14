/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: xWing
 *
 * Created on December 3, 2020, 5:31 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee 
{
private:
    char ename[10];
    char enumb[10];
    char hired[10];
public:
    //Gets the values of the above from the user
    void ginfo();
    void display();
    
};
#endif /* EMPLOYEE_H */

