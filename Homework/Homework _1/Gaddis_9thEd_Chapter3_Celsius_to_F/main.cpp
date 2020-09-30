/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    float f;
    int c;
    //Initialize all known variables
    cout<<"Input the Celsius Value"<<endl;
    cin>>c;
    
    //Process Inputs to Outputs -> Mapping Process
    f=1.8*c+32;
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<c<<" Celsius is "<<f<<" Fahrenheit"<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations