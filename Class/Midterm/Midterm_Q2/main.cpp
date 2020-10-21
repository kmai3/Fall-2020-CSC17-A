/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 19, 2020, 6:00 Pm
 * Purpose: Determining paycheck
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries
#include "employe.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int e; //Employee amount
 
    cout<<"How many employees are there?"<<endl;
    cin>>e;
    employee arr[e];
    for(int i=0; i<e; i++){
    //Input or initialize values Here
    cout<<"Input the Company"<<endl;
    cin>>arr[i].company;
    cout<<"Input the Address"<<endl;
    cin>>arr[i].address;
    cout<<"Input the Name"<<endl;
    cin>>arr[i].name;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>arr[i].payRate>>arr[i].hrsWrkd;
    
    //Calculate Paycheck
    
    if (arr[i].hrsWrkd<=20) //If they worked for less than 20 hours
    {
        arr[i].gp=arr[i].payRate*arr[i].hrsWrkd; 
    }
    else
    {
        if(arr[i].hrsWrkd<40) //If they work less than 40 hours
        {
            arr[i].gp=arr[i].payRate*20+((arr[i].hrsWrkd-20)*arr[i].payRate*2);
        }
        else //If they worked more than 40 hours 
        {
            arr[i].gp=arr[i].payRate*20+(arr[i].payRate*20*2)+((arr[i].hrsWrkd-40)*arr[i].payRate*3);
        }
    }
    //Output the check
    }
    for(int i=0; i<e; i++){
        cout<<fixed;
        cout<<"Company: "<<arr[i].company<<endl;
        cout<<"Address: "<<arr[i].address<<endl;
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"Amount: $"<<setprecision(2)<<arr[i].gp<<endl;
        cout<<"Signature Line: "<<endl<<endl<<endl;
    }
    
    //Exit
    return 0;
}

//Function Implementations
