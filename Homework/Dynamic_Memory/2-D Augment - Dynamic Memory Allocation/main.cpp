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
int **getData(int &,int &);//Get the Matrix Data
void printDat(const int * const *,int,int);//Print the Matrix
int **augment(const int * const *,int,int);//Augment the original array
void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int r;
    int c;
    int **arr=getData(r, c);
    int **arr2=augment(arr, r+1, c+12);
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    printDat(arr, r, c);
    cout<<endl;
    printDat(arr2, r+1, c+1);
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
int **getData(int &r ,int &c){//Get the Matrix Data
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
void printDat(const int * const *arr,int r,int c){//Print the Matrix
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if(j<c-1)
        cout<<arr[i][j]<<" ";
        else
        cout<<arr[i][j];
    }
    if(i<r-1){
        cout<<endl;
    }
}
}
int **augment(const int * const *arr,int r,int c){//Augment the original array
    int **a=new int*[r];
    for(int i=0; i<r; i++){
        a[i]=new int[c];
    }
    for(int i=0; i<c; i++){
        a[0][i]=0;
    }
    for(int i=0; i<r; i++){
        a[i][0]=0;
    }
    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            a[i][j]=arr[i-1][j-1];
        }
    }
    return a;
}
void destroy(int **a,int b){//Destroy the Matrix, i.e., reallocate memory
    for(int row=0; row<b; row++){
        delete []a[row];
    }
    delete []a;
}