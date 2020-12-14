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
T total(T &num1){
    T value=0;
    T temp;
    for(int i=0; i<num1; i++){
        cin>>temp;
        value+=temp;
    }
    return value;
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    float x;
    float value;
    cout<<"Enter amount of numbers inputed"<<endl;
    cin>>x;
    value=total<float>(x);
    //Display the Inputs/Outputs
    cout<<"The Total is "<<value<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
