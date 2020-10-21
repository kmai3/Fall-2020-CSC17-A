 /* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  File and Lines
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    fstream file;
    int size=24;
    string store[size];
    string name;
    char useri;
    
    //Initialize all known variables
    cout<<"What is the File Name"<<endl;
    cin>>name;
    file.open(name, ios::in | ios::out);
    for(int i=0; i<size; i++){ //Reads 24 lines of the file
        getline(file, store[i]);
    }
    for(int i=0; i<size; i++){ //Outputs 24 lines of the file 
         cout<<i<<": "<<store<<endl;
    }
    cout<<"Enter in / to continue"<<endl;
    cin>>useri;
    if(useri='/'){ //If the user enters / it will read in 24 more lines
    for(int i=0; i<size+24; i++){
        getline(file, store[i]);
    }
    for(int i=0; i<size+24; i++){
        cout<<i<<": "<<store<<endl;
    }
    }
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
