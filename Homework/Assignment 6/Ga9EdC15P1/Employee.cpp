/*
 *Employee Get Function to gather data
 *For Question 1 
 *  */
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
void Employee::ginfo(){
    cout<<"Enter in the Employee Name"<<endl;
    cin>>ename;
    cout<<"Enter in the ID of the Employee"<<endl;
    cin>>enumb;
    cout<<"Enter in the Hired Date of the Employee"<<endl;
    cin>>hired;
}
void Employee::display(){
    cout<<"The Employee Name is "<<ename<<endl;
    cout<<"The ID of the Employee is "<<enumb<<endl;
    cout<<"The Date This Employee was hired is "<<hired<<endl;
}