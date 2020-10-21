/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 15, 2020, 7:01 PM
 * Purpose:  Open and Read from a bin file
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void arrfile(fstream &, int *, int);
void filearr(fstream &, int *, int);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    int useri; //User Input
    int max=10;
    int *arr=new int[max]; //Array
    fstream binFile, binFilex;
    binFile.open("binFile.bin", ios::in|ios::out|ios::binary);
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Press 1 to Transfer Array into Bin File"<<endl;
    cout<<"Press 2 to Read Array from Bin File"<<endl;
    cin>>useri;
    if(useri==1){
        cout<<"You Picked Choice 1"<<endl;
        for(int i=0; i<max; i++){
            arr[i]=rand()%9+1;    
            cout<<arr[i];
        }
        cout<<endl;
        arrfile(binFile, arr, max);
    }else if(useri==2){
        filearr(binFile, arr, max);
        for(int i=0; i<max; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }else{
        cout<<"You didn't input a valid input good bye"<<endl;
    }
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    delete []arr;
    //Exit stage right
    return 0;
}
void arrfile(fstream &out, int *arr, int max){
    out.write(reinterpret_cast<char *>(arr),max);
}
void filearr(fstream &in, int *arr, int max){
    long cursor=0l;
    in.seekg(cursor, ios::beg);
    in.read(reinterpret_cast<char *>(arr), max);
}
//Function Implementations
