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
#include <cmath>
using namespace std;

//User Libraries
#include "banking.h"
#include "bdata.h"
#include "employe.h"
#include "Stats.h"
#include "Array.h"
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
Array *fillAry(int,int);        //Fill an array and put into a structure
void prntAry(const Array *,int);//Print the array 
int *copy(const int *,int);     //Copy the array
void mrkSort(int *,int);        //Sort an array
void prtStat(const Stats *);    //Print the structure
void rcvrMem(Array *);          //Recover memory from the Array Structure
void rcvrMem(Stats *);          //Recover memory from Statistics Structure
void encrypt();
void decrypt();
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
void problem2(){
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
}
int *copy(const int *a,int n){
    //Declare and allocate an array
    //that is a c
    int *b=new int[n];
    //Fill
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //Return the copy
    return b;
}

void prtStat(const Stats *ary){
    cout<<endl;
    cout<<"The average of the array = "<<ary->avg<<endl;
    cout<<"The median of the array  = "<<ary->median<<endl;
    cout<<"The number of modes      = "<<
            ary->mode->size<<endl;
    cout<<"The max Frequency        = "<<
            ary->modFreq<<endl;
    if(ary->mode->size==0){
        cout<<"The mode set             = {null}"<<endl;
        return;
    }
    cout<<"The mode set             = {";
    for(int i=0;i<ary->mode->size-1;i++){
        cout<<ary->mode->data[i]<<",";
    }
    cout<<ary->mode->data[ary->mode->size-1]<<"}"<<endl;
}

void mrkSort(int *array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

void rcvrMem(Stats *stats){
    rcvrMem(stats->mode);
    delete stats;
}

void rcvrMem(Array *array){
    delete []array->data;
    delete array;
}

void prntAry(const Array *array,int perLine){
    //Output the array
    for(int i=0;i<array->size;i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n, int modNum){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[array->size];
    
    //Fill the array with mod numbers
    for(int i=0;i<n;i++){
        array->data[i]=i%modNum;
    }
    
    //Exit function
    return array;
}

Stats *stat(const Array *array){
    //Non-working stub to be completed by the student
    int temp=0;
    cout<<endl<<"Stat function to be completed by the student"<<endl;
    Stats *stats=new Stats;
    stats->mode=new Array;
    stats->mode->size=0;
    int nModes=0;
    if(nModes!=0)stats->mode->data=new int[nModes];
    stats->modFreq=0;
    stats->median=0;
    stats->avg=0;
    // Calculates the Average of the Stats
    for(int i=0; i<array->size; i++){
        temp+=array->data[i];
    }
    stats->avg=temp/array->size;
    temp=0;
    // Calculates the Median of the Array
    int l=array->size/2;
    float temps=(array->data[l-1]+array->data[l]);
    stats->median=(array->size%2==1)?array->data[l]: temps/2;
    //Calculates Mode
    int tempary[array->size];
    for(int i=0; i<array->size; i++)
    {
        tempary[i] = 0; 
    }
    for(int i=0; i<array->size; i++)
    {
      tempary[array->data[i]]++; 
    }

    for(int i=0; i<array->size; i++)
    {
       if(tempary[i]>stats->modFreq)
       {
           stats->modFreq = tempary[i];
       }
    }
    
    for(int i=0; i<array->size; i++)
    {
        
    }
    
    
    for(int i=0; i<10; i++)
    {
       if(tempary[i] == stats->modFreq)
       {
           stats->mode->size++;
       }
    }
    
    if(stats->mode->size == 10) // resets to 0 if 10
    {
        stats->mode->size = 0;
    }
    nModes=2;
    if(nModes!=0)stats->mode->data=new int[nModes];
    stats->mode->data[0]= stats->mode->size;
    stats->mode->data[1]= stats->modFreq;
    
    int j=2;
    
    //Fill the mode array
   for(int i =0; i<10; i++)
    {
        if(tempary[i]==stats->modFreq)
        {
        stats->mode->data[j] = i;//fill modeAry 
        j++;
        }
    }
    return stats;
}
void problem3(){
    //Declare variables
    int arySize;//Array Size
    int modNum; //Number to control the modes (digits 0 to 9 allowed)
    Array *array;
    
    //Input the size and mod number
    cout<<"This program develops an array to be analyzed"<<endl;
    cout<<"Array size from mod number to 100"<<endl;
    cout<<"Mod number from 2 to 10"<<endl;
    cout<<"Input the Array Size and the mod number to be used."<<endl;
    cin>>arySize>>modNum;
    cout<<endl<<endl;
    
    //Fill the array
    array=fillAry(arySize,modNum);
    
    //Print the initial array
    cout<<"Original Array before sorting"<<endl;
    prntAry(array,10);
    
    //Sort the array
    mrkSort(array->data,array->size);
    cout<<"Sorted Array to be utilize for the stat function"<<endl;
    prntAry(array,10);
    
    //Calculate some of the statistics
    Stats *stats=stat(array);

    //Print the statistics
    prtStat(stats);
    
    //Recover allocated memory
    rcvrMem(array);
    rcvrMem(stats);
}
void encrypt(){
    int size=4;
    char useri[size];
    bool test=true;
    int code[size];
    int temp[size];
    //Initialize all known variables
    //Gathers the code
    cout<<"Enter in the Super Secret Code"<<endl;
    for(int i=0; i<size; i++){
        cin>>useri[i];
    }
    //Checks if the code has a bad number in it
    for(int i=0; i<size; i++){
        if(useri[i]>=56){
         test=false;   
        }
    }
    //Turns the code into the new digit
    if(test==false){
        cout<<"You entered in the wrong code"<<endl;
        cout<<"It contains a number higher than 7"<<endl;
    }
    if(test){
       for(int i=0;i<size; i++){
           temp[i]=(useri[i]-48+5)%8;
       }
       code[0]=temp[2];
       code[1]=temp[3];
       code[2]=temp[0];
       code[3]=temp[1];
       cout<<"Encrypted Code"<<endl;
       for(int i=0;i<size; i++){
           cout<<code[i];
       }
       test=false;
    }
}
void decrypt(){
    int size=4;
    string useri;
    int temp[size];
    int code[size];
    cout<<"Enter in the Code you Recieved"<<endl;
    cin>>useri;
    temp[0]=useri[2]-48;
    temp[1]=useri[3]-48;
    temp[2]=useri[0]-48;
    temp[3]=useri[1]-48;
    for(int i=0; i<size; i++){
        code[i]=(temp[i]>=5)?temp[i]-5:temp[i]+3;
    }
    cout<<"Decrypted Into: ";
    for(int i=0; i<size; i++){
        cout<<code[i];
    }
}
void problem4(){
    int user;
    cout<<"Decrypt or Encrypt"<<endl;
    cout<<"Press 1 for Decrypt, Press 2 for Encrypt"<<endl;
    cin>>user;
    switch(user)
    {
        case 1: decrypt();break;
        case 2: encrypt();break;
        default: cout<<"1 or 2 wasn't entered, exiting"<<endl;break;
    
}
}
void problem5(){
    cout<<"Float Factorial Max 81"<<endl;
    cout<<"Int Factorial Max 25"<<endl;
    cout<<"Unsigned Int Factorial Max is 40"<<endl;
    cout<<"Signed Int Factorial Max is 45"<<endl;
    cout<<"Double Factorial Max is 81 as well? out put was "
            "output for 82 -inf vs output for -nan"<<endl;
    cout<<"Unsigned short Max is 25"<<endl;
    cout<<"Short breaks or 1"<<endl;
    
} 
void problem6(){
    cout<<"2.875: Binary;10.875 Oct;2.7 Hex:2.E"<<endl;
    cout<<"Float Representation: 0|100|0111"<<endl;
    cout<<"Negative Float Representation 1|100|0111"<<endl;
    cout<<"0.1796875: Binary: 0.0010111 Oct: 0.134 Hex:0.2E"<<endl;
    cout<<"Float Representation: 0|001|0111"<<endl;
    cout<<"Negative Float Representation 1|001|0111"<<endl;
    cout<<"The Float Conversion Definitions, I can't seem to do"<<endl;
}
void problem7(){
     //Declare all variables for this function
    int max=20;
    int n; //User Input
    int arr[max];
    int arc=0; //Array Counter
    //Initialize all known variables
    cout<<"I honestly could not figure out how you would use that specific"<<endl; 
    cout<<"structure in the txt file to store numbers and primes"<<endl; 
    cout<<"but heres a program that can find prime factorials"<<endl;
    cout<<"Enter in The Number"<<endl;
    cin>>n;
    //Process Inputs to Outputs -> Mapping Process
     while (n%2 == 0){
        arr[arc]=2;
        n = n/2;
        arc++;
    }
    int indx=0;
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            arr[arc]=i;
            n = n/i;
            arc++;
        }
    }
    if (n > 2)
        arr[arc]=n;
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout<<"Prime Factorial"<<endl;
    for(int i=0; i<arc; i++){
        cout<<arr[i]<<" * ";
    }
    cout<<arr[arc]<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
}