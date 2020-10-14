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
int *getData(int &); //Return the array size and the array from the inputs
int *sumAry(const int *,int);//Return the array with successive sums
void prntAry(const int *,int);//Print the array
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int n; // Size of Array Determined by the User
    int *arr=getData(n); //Regular Array
    int *sarr=sumAry(arr, n); //Array of Sums
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    prntAry(arr, n);
    cout<<endl;
    prntAry(sarr, n);
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
int *getData(int &n){           //Fill the array
    cin>>n; // gets the max
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>*(arr+i);
    }
    return arr;
}           
int *sumAry(const int *a,int n){
    int *arr=new int[n];
    arr[0]=a[0];
    for(int i=1; i<n; i++){
        arr[i]=arr[i-1]+a[i];
    }
    return arr;
}
void prntAry(const int *arr,int n){ //Print the array
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
}