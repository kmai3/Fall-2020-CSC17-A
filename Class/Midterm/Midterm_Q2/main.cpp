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
void numlet(employee , int);
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
        cout<<"Amount: "; 
        int number=arr[i].gp;
        int t=0;
        //Calculate the 1000's, 100's, 10's and 1's
        int ntt=number/1000%10;
        switch (ntt)
        {
            case 1:cout<<"One Thousand ";break;
            case 2:cout<<"Two Thousand ";break;
            case 3:cout<<"Three Thousand ";break;
            case 4:cout<<"Four Thousand ";break;
            case 5:cout<<"Five Thousand ";break;
            case 6:cout<<"Six Thousand ";break;
            case 7:cout<<"Seven Thousand ";break;
            case 8:cout<<"Eight Thousand ";break;
            case 9:cout<<"Nine Thousand ";break;
        }
        
        int nh=number/100%10;
        switch (nh)
        {
            case 1:cout<<"One Hundred ";break;
            case 2:cout<<"Two Hundred ";break;
            case 3:cout<<"Three Hundred ";break;
            case 4:cout<<"Four Hundred ";break;
            case 5:cout<<"Five Hundred ";break;
            case 6:cout<<"Six Hundred ";break;
            case 7:cout<<"Seven Hundred ";break;
            case 8:cout<<"Eight Hundred ";break;
            case 9:cout<<"Nine Hundred ";break;
        }
    int nt=number/10%10;
    switch (nt)
    {
        case 1:t=1;break;
        case 2:cout<<"Twenty ";break;
        case 3:cout<<"Thirty ";break;
        case 4:cout<<"Forty ";break;
        case 5:cout<<"Fifty ";break;
        case 6:cout<<"Sixty ";break;
        case 7:cout<<"Seventy ";break;
        case 8:cout<<"Eighty ";break;
        case 9:cout<<"Ninety ";break;
    }
    if (t==1)
    {
        int nO=number%10;
        switch(nO)
        {
            case 0:cout<<"Ten ";break;
            case 1:cout<<"Eleven ";break;
            case 2:cout<<"Twelve ";break;
            case 3:cout<<"Thirteen ";break;
            case 4:cout<<"Fourteen ";break;
            case 5:cout<<"Fiftheen ";break;
            case 6:cout<<"Sixteen ";break;
            case 7:cout<<"Seventeen ";break;
            case 8:cout<<"Eighteen ";break;
            case 9:cout<<"Nineteen ";break;
        }
    }
    else
    {
    int nO=number%10;
        switch(nO)
        {
            case 1:cout<<"One ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
        }
    }
    //Output the check value
    
    cout<<"and no/100's Dollars"<<endl;
        cout<<endl;
        cout<<"Signature Line: "<<endl<<endl<<endl;
    }
    
    //Exit
    return 0;
}

