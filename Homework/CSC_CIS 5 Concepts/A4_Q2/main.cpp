/* 
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on September 17, 2020 8:00 PM
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int);//Sort by row
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}
int read(char array[][COLMAX],int &rowDet){
    cout<<"Now input the array."<<endl;
    int colDet=0;
    int rows=0;
    int colC=0;
    while(cin>>array[rows]){
        int ln =strlen(array[rows++]);
        if(colDet<ln)
        colDet=ln;
    }
    rowDet=rows;
    return colDet;
}
void sort(char array[][COLMAX],int rowIn,int colIn){
    for(int x=0; x<2; x++){
    for(int i=0; i< rowIn-1; i++){
        if(strcmp(array[i], array[i+1])>0)
        for(int j=0; j< colIn;j++){
                swap(array[i][j], array[i+1][j]);
        }
    }
    }
}
void print(const char array[][COLMAX],int rowIn,int colIn){
    for(int i=0; i<rowIn; i++){
        cout<<array[i]<<endl;
    }
}