/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Sum Dynamic Memory
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void encrypt();
void decrypt();
//Execution of Code Begins Here
int main(int argc, char** argv) {
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
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
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