/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on December 13, 2020
 * Purpose:  New Game File
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string> // String Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this functi
    string name;
    unsigned char choice1;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<"Hello Player, Welcome to Simplified Dungeons and Dragons"<<endl;
    cout<<"Please Enter in a Name for your character"<<endl;
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    cout<<"Now You get to pick a class, There are currently three in the Game"<<endl;
    cout<<"The Three Classes are...."<<endl;
    cout<<"Mage, Archer, Swordsman"<<endl;
    cout<<"Enter 1 for Mage, Enter 2 for Archer, Enter 3 for Swordsman"<<endl;
    cin>>choice1;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
