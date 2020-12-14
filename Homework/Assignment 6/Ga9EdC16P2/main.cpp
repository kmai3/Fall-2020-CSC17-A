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
#include "Time.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int hour;
    int min;
    int sec;
    //Initialize all known variables
    try{
        cout<<"Enter The Hours of the day out of 24"<<endl;
        cin>>hour;
        if(hour<0 || hour>23){
            throw(hour);
        }
    }
    catch(int x){
        cout<<x<<" is an invalid number for the amount of hours"<<endl;
        cout<<"Program is now exiting...."<<endl;
        return 0;
    }
    try{
        cout<<"What is the Minute right now?"<<endl;
        cin>>min;
        if(min<0 || min>59){
            throw(min);
        }
    }
    catch(int x){
        cout<<x<<" is an invalid number for amount of minutes"<<endl;
        cout<<"Program is now exiting...."<<endl;
        return 0;
    }
    cout<<"What is the Second of the minute right now"<<endl;
    cin>>sec;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    Time test(hour, min, sec);
    test.mtime();
    test.rtime();
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
