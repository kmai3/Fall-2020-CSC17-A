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
#include "Essay.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int gram;
    int spell;
    int length;
    int content;
    //Initialize all known variables
    cout<<"Enter the Student's Score in Grammar, spelling, length and Content"<<endl;
    cout<<"In that Order"<<endl;
    cin>>gram>>spell>>length>>content;
    Essay student(gram, spell, length, content);
    cout<<"Their Score is "<< student.getscore() <<endl;
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
