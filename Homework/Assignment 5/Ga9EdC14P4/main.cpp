/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Sum Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries
#include "Numdays.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    Numdays data1;
    Numdays data2;
    //Initialize all known variables
    data1.convert();
    data2.convert();
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    data1.prnt();
    data2.prnt();
    cout<<"This is the Combined worked Days "<<data1.wkdays+data2.wkdays<<endl;
    cout<<"This is the subtracted worked days "<<data1.wkdays-data2.wkdays<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
