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
T absolute(T &num1){
    int value;
    if(num1<0){
        value=num1*-1;
    }else{
        value=num1;
    }
    return value;
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    float x;
    float value;
    cout<<"Enter value"<<endl;
    cin>>x;
    value=absolute(x);
    cout<<"Absolute value is "<<value<<endl;
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
