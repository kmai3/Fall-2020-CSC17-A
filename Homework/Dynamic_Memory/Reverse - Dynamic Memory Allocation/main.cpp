/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 1, 2020, 5:03 PM
 * Purpose: Reverse Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int *getData(int &);           //Fill the array
int *sort(const int *,int);    //Sort smallest to largest
int *reverse(const int *, int); //Sort in reverse order
void prntDat(const int *, int); //Print the array
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int n;
    int *arr=getData(n);
    int *arr1=sort(arr, n);
    int *arr2=reverse(arr, n); 
    //Initialize all known variables
    prntDat(arr1, n);
    cout<<endl;
    prntDat(arr2, n);
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    delete arr;
    delete arr1;
    delete arr2;
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
int *sort(const int *arr,int n){     //Sort smallest to largest
    int *a=new int[n];
    for(int i=0; i<n; i++){
        a[i]=arr[i];
    }
    for(int i=0;i<n-1;i++){
        //Swap as you go to place the smallest element at the top
        for(int j=i+1;j<n;j++){
            //Logic swap
            if(*(a+i)>*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
    return a;
}
int *reverse(const int *arr,int n){ //Sort in reverse order
 int *a=new int[n];
    for(int i=0; i<n; i++){
        a[i]=arr[i];
    }
 for(int i=0;i<n-1;i++){
        // Swap as you go to place the largest at the top
        for(int j=i+1;j<n;j++){
            //Logic swap
             if(*(a+i)<*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
    return a;
}
void prntDat(const int *arr,int n){ //Print the array
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
}