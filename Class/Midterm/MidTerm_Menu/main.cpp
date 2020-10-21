/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 18, 2020, 10:14 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "banking.h"
#include "bdata.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void gaccount(Bank &);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all variables for this function
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    int inN;
        do{
         Menu();
         inN=getN();
         switch(inN){
          case 1:    problem1();break;
          case 2:    problem2();break;
          case 3:    problem3();break;
          case 4:    problem4();break;
          case 5:    problem5();break;
          case 6:    problem6();break;
          case 7:    problem7();break;
          default:   def(inN);}
        }while(inN<8);
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type 7 to execute Problem 7"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}
void problem1(){
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
    delete []x.deposit;
    delete []x.checks;
}
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