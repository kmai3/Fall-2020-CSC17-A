/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 15, 2020, 12;00 PM
 * Purpose:  Sentence Filter
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string> //String
#include <fstream>
#include <cctype> 
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    string f1; 
    string f2;
    char ch;
    ifstream inFile;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Please Enter in the name of the first file"<<endl;
    cin>>f1;
    cout<<"Please Enter the name of the second file"<<endl;
    cin>>f2;
    inFile.open(f1);
    ofstream outFile(f2);
    if (inFile)
    {
        cout<<"File is Successfully Opened"<<endl;
        inFile.get(ch);
        while(inFile)
        {
            outFile.put(tolower(ch));
            inFile.get(ch);
        }
    }
    inFile.close();
    outFile.close();
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
