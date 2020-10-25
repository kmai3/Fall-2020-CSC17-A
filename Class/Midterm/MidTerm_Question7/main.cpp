/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Sum Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
#include <math.h>
using namespace std;

//User Libraries
#include "Primes.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int max=20;
    int n; //User Input
    int arr[max];
    int arc=0; //Array Counter
    //Initialize all known variables
    cout<<"Enter in The Number"<<endl;
    cin>>n;
    //Process Inputs to Outputs -> Mapping Process
     while (n%2 == 0){
        arr[arc]=2;
        n = n/2;
        arc++;
    }
    int indx=0;
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            arr[arc]=i;
            n = n/i;
            arc++;
        }
    }
    if (n > 2)
        arr[arc]=n;
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<"Prime Factorial"<<endl;
    for(int i=0; i<arc; i++){
        cout<<arr[i]<<" * ";
    }
    cout<<arr[arc]<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
