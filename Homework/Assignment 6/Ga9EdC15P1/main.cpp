/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on December 3, 2020, 6:51
 * Purpose:  Employee and Production Worker
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries
#include "ProductionWorker.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    float hrrate;
    int shift;
    cout<<"Enter in the Hour PayRate"<<endl;
    cin>>hrrate;
    cout<<"Enter in the Shift 1 for day 2 for night"<<endl;
    cin>>shift;
    Prowork eone(hrrate, shift);
    eone.ginfo();
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    eone.display();
    eone.discalc();
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
