/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on July 8, 2020, 9:42 PM
 * Purpose:  Book Store 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int b, // amount of books bought
        p; // amount of points earned
                 
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>b;

    //Map inputs -> outputs
    p=(b==1)?5:(b==2)?15:(b==3)?30:60;
      
    //Display the outputs
    cout<<"Books purchased ="<<setw(3)<<b<<endl;
    cout<<"Points earned   ="<<setw(3)<<p;
    
    //Exit stage right or left!
    return 0;
}