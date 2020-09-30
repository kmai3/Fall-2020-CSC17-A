/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on 9/17/2020, 8:30 PM
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &, int);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    int n=strlen(digits);
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort, n)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(unShort,n);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}
bool  inRange(const char digits[],unsigned short &unShort){
    int n=strlen(digits);
    int check;
    for(int count=0; count<n; count++){
        if (digits[count]>57){
            return false;
        }
    }
    check=(n==1)?digits[0]-48:(n==2)?digits[0]-48+(digits[1]-48)*10:(n==3)?digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100:
    (n==4)?digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100+(digits[3]-48)*1000:digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100+
    (digits[3]-48)*1000+(digits[4]-48)*10000;
    unShort=(n==1)?digits[0]-48:(n==2)?digits[0]-48+(digits[1]-48)*10:(n==3)?digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100:
    (n==4)?digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100+(digits[3]-48)*1000:digits[0]-48+(digits[1]-48)*10+(digits[2]-48)*100+
    (digits[3]-48)*1000+(digits[4]-48)*10000;
    if(n>5 || check>65535){
        return false; 
    }
    else{
        return true;
    }
    
}
bool  reverse(unsigned short unShort,signed short &snShort, int n){
    int check;
    check=(n==1)?unShort*10000:(n==2)?unShort*1000:(n==3)?unShort*100:(n==4)?unShort*10:unShort*1;
    snShort==(n==1)?unShort*10000:(n==2)?unShort*1000:(n==3)?unShort*100:(n==4)?unShort*10:unShort*1; 
    if(check>32767){
        return false;
    }
    else{
        return true;
    }
}
short subtrct(signed short unShort,int n){
    short snShort=(n==1)?unShort*10000:(n==2)?unShort*1000:(n==3)?unShort*100:(n==4)?unShort*10:unShort*1;
    if(snShort>999){
        snShort-=999;
    }
}