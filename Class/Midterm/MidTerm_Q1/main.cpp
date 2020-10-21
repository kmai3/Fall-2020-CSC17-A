/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Banking
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries
#include "banking.h"
#include "bdata.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void gaccount(Bank &);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    Bank u;  //Personal Information
    Bdata x; //Banking Data
    x.totalc=0;
    //Initialize all known variables
    cout<<"Welcome to Bank Mobile"<<endl;
    cout<<"Enter in Your Name"<<endl;
    cin>>(u.name);
    cout<<"Enter in your Address"<<endl;
    cin>>(u.address);
    gaccount(u);
    cout<<"Enter your Balance at The Beginning of the month"<<endl;
    cin>>(x.bal);
    cout<<"Enter the amount of checks you written this month"<<endl;
    cin>>x.ncheck;
    x.checks=new float[x.ncheck];
    cout<<"Enter the Check Amounts"<<endl;
    // Loops to gather information depending on how many checks they wrote this month
    for(int i=0; i<x.ncheck; i++){
        cout<<"Enter for Check"<<i+1<<endl;
        cin>>x.checks[i];
        x.totalc+=x.checks[i];
    }
    cout<<"Enter the amount of deposits you done this month"<<endl;
    cin>>x.ndepo;
    x.deposit=new float[x.ndepo];
    for(int i=0; i<x.ndepo; i++){
        cout<<"Enter for Deposit "<<i+1<<endl;
        cin>>x.deposit[i];
        x.totald+=x.deposit[i];
    }
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout<<"Name "<<u.name<<endl;
    cout<<"Address "<<u.address<<endl;
    if(x.totalc>x.totald+x.bal){
        cout<<"You have overdrawn"<<endl;
        cout<<"20$ has been added as an invoice"<<endl;
        cout<<"Amount Due "<<x.totalc-x.totald+20<<endl;
    }else{
        cout<<"Here is your new Balance "<<x.bal+x.totald-x.totalc<<endl;
    }
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    delete []x.deposit;
    delete []x.checks;
    return 0;
}

//Function Implementations
void gaccount(Bank &u){
    bool test=true;
    string temp;
    int check; //Checks if its 5 Digits or more 
    do{
        cout<<"Enter in Your Account Number, Only 5 Digits"<<endl;
        cin>>temp;
        check=temp.size();
        if(check<6){
            test=false;
            u.account=temp;
        }
    }while(test);
}