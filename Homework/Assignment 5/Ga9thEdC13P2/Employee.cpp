/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Employee.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Employee::dinfo(string iname, string idepart, string iposit, int iid){
    //Transfers Data Over to Class
    name=iname;
    depart=idepart;
    posit=iposit;
    id=iid;
}
void Employee::display(){
    cout<<setw(10)<<name<<setw(10)<<id<<setw(25)<<depart<<setw(15)<<posit<<endl;
}