/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 1, 2020, 7:13 PM
 * Purpose:  2-D Sum 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int **getData(int &,int &);        //Return the 2-D array and its size.
void prntDat(const int* const *,int,int);//Print the 2-D Array
void destroy(int **,int,int);       //Deallocate memory
int sum(const int * const *, int,int);    //Return the Sum

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int r=0; //Rows
    int c=0; //Columns
    int **arr=getData(r, c);
    int answ=sum(arr, r, c);
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    prntDat(arr, r, c);
    cout<<answ;
    //Clean up the code, close files, deallocate memory, etc....
    destroy(arr, r, c);
    //Exit stage right
    return 0;
}

//Function Implementations
int **getData(int &r,int &c){        //Return the 2-D array and its size.
    cin>>r>>c;
    int **arr=new int*[r];
    for(int i=0; i<r; i++){
        arr[i]=new int[c];
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    return arr;
}
void prntDat(const int * const *arr,int r,int c){//Print the 2-D Array
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if(j<c-1)
        cout<<arr[i][j]<<" ";
        else
        cout<<arr[i][j];
    }
    cout<<endl;
}
}
void destroy(int **a,int b,int c ){       //Deallocate memory
    for(int row=0; row<b; row++){
        delete []a[row];
    }
    delete []a;
}
int sum(const int * const *arr, int r,int c){    //Return the Sum
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}