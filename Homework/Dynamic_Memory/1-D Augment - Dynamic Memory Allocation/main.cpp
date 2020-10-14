/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Augment Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int *getData(int &);//Read the array
int *augment(const int *,int);//Augment and copy the original array
void prntAry(const int *,int);//Print the array
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int n;
    int *arr=getData(n);
    int *arr2=augment(arr, n);
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    prntAry(arr, n);
    cout<<endl;
    prntAry(arr2, n+1);
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
int *getData(int &n){//Read the array
    cin>>n; //Gets the size
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    return arr;
}
int *augment(const int *arr,int n){//Augment and copy the original array
    int *a=new int[n+1];
    a[0]=0;
    for(int i=1, j=0; j<n; i++, j++){
        a[i]=arr[j];
    }
    return a;
}
void prntAry(const int *arr,int n){//Print the array
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
}