/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on September 7, 2020 
 * Purpose: Currency Conversion
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
    float usd,
          yen,
          euro;
    //Initialize all known variables
    cout<<"Type Amount of Money in USD"<<endl;
    cin>>usd;
    //Process Inputs to Outputs -> Mapping Process
    yen=usd*98.93;
    euro=usd*0.74;
    //Maps known values to the unknown objectives
    cout<<"Amount of USD: "<<usd<<endl;
    cout<<"Amount of USD in Yen: "<<yen<<endl;
    cout<<"Amount of USD in Euro: "<<euro<<endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations