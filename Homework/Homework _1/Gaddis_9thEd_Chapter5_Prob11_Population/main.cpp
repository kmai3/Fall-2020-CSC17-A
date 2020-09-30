/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on September 7, 2020, 11:40
 * Purpose: Population Projections
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
    int sno, //Starting number of organism
        adi, // Average Daily Population Increase 
        nd; //Number of Days 
    //Initialize all known variables
    cout<<"Population Simulator"<<endl;
    cout<<"What is the Starting Number of Organism"<<endl;
    cin>>sno;
    cout<<"What is the Average Daily Population Increase"<<endl;
    cin>>adi;
    cout<<"What is the projected number of days"<<endl;
    cin>>nd;
    //Process Inputs to Outputs -> Mapping Process
    for(int i=1; i<nd; i++){
        sno+=adi;
        cout<<"Current Population: "<< sno << endl;
        cout<<"Day: "<< i+1 << endl;
    }
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations