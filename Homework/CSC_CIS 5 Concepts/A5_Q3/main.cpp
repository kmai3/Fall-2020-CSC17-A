/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on 9/16/2020, 8:00 AM
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}
void read(int array[],int sizeIn){
    for(int i=0;i<sizeIn; i++){
        cin>>array[i];
    }
}
int  stat(int array[],int sizeIn,int &max,int &min){
    int sum;
    for(int i=0; i < sizeIn-1; i++){
        for(int j=0; j < sizeIn-i-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
    min=array[0];
    max=array[sizeIn-1];
    sum=array[0];
    for(int i=1; i<sizeIn; i++){
        sum+=array[i];
    }
    return sum;
}
void print(const int array[],int sizeIn ,int sum,int max,int min){
    for(int i=0; i<sizeIn; i++){
        cout<<"a["<<i<<"]"<<" = "<<array[i]<<endl;
    }
    cout<<"Min "<<" = "<<min<<endl;
    cout<<"Max "<<" = "<<max<<endl;
    cout<<"Sum "<<" = "<<sum<<endl;
}
