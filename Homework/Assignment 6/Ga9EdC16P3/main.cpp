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

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
template <class T>
T max(T &num1, T &num2){
    T maxVal = (num1 > num2)? num1 : num2;
    return maxVal;
}
template <class T>
T min(T &num1, T &num2){
    T maxVal = (num1 < num2)? num1 : num2;
    return maxVal;
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int n1=3;
    int n2=2;
    int n3=10;
    int n4=12;
    //Initialize all known variables
    int min2=min<int>(n1, n2);
    int max2=max<int>(n3, n4);
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Min: "<<min2<<endl;
    cout<<"Max: "<<max2<<endl;
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
