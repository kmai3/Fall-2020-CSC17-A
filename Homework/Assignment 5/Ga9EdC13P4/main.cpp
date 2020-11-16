/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Sum Dynamic Memory
 */

//System Libraries
#include <iostream>
#include <string>
#include "Patient.h"
#include "Procedure.h"  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    Patient data;
    Procedure odata1;
    Procedure odata2;
    Procedure odata3;
    //Initialize all known variables
    data.getinfo();
    odata1.getinfo();
    odata2.getinfo();
    odata3.getinfo();
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    data.prnt();
    odata1.prnt();
    odata2.prnt();
    odata3.prnt();
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
