/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on November 10, 2020
 * Purpose:  Employee Stuff
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries
#include "Employee.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    Employee data1;
    Employee data2;
    Employee data3;
    string name1="Susan Meyers";
    string name2="Mark Jones";
    string name3="Joy Rogers";
    string depart1="Accounting";
    string depart2="IT";
    string depart3="Manufacturing";
    string posit1="Vice President";
    string posit2="Programmer";
    string posit3="Engineer";
    int id1=47899;
    int id2=39119;
    int id3=81774;
    //Initialize all known variables
    data1.dinfo(name1, depart1, posit1, id1);
    data2.dinfo(name2, depart2, posit2, id2);
    data3.dinfo(name3, depart3, posit3, id3);
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<setw(10)<<"Name"<<setw(10)<<"Id"<<setw(25)<<"Department"<<setw(15)<<"Position"<<endl;
    data1.display();
    data2.display();
    data3.display();
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
