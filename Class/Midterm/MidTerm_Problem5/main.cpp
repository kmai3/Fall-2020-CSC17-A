/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Sum Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    for(int i=0; i<100; i++){
    float sum = 0;
    float flag = 0;
    float ctr = 0;
    for(ctr = 0; ctr < i; ctr++){
        int n = (2*ctr) + 1;
        float fact = 1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        float term = pow(i, n)/fact;
        if(flag == 0){
            sum += term;
            flag = 1;
        }
        else{
            sum -= term;
            flag = 0;
        }
    }
    cout<<"For "<<i<<"Factorial"<<endl;
    cout << sum << endl <<endl ;
    }
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
