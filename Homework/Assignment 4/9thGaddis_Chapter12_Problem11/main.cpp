/* 
 * File: GA9EdC11P3   
 * Author: Kevin Mai
 * Created on October 15, 2020, 7:52 PM
 * Purpose:  Weather
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries
#include "sales.h"
//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void gather(sales &); //Gathers info
void show(const sales, fstream &);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    fstream binFile;
    sales n = {"North"};
    sales e = {"East"};
    sales w = {"West"};
    sales s = {"South"};
    
    //Initialize Variables
    binFile.open("binFile.bin", ios::out | ios::binary);
    gather(n);
    show(n, binFile);
    cout<<endl;
    gather(w);
    show(w, binFile);
    cout<<endl;
    gather(e);
    show(e, binFile);
    cout<<endl;
    gather(s);
    show(s, binFile);
    //Process or map Inputs to Outputs
    //Display Outputs

    //Exit stage right!
    return 0;
}
void gather(sales& x)
{
    x.annual = 0;
    x.avgs = 0;

    cout << x.divN << endl;

    //Splits up the Quarter Sales order
    const string qrtOrder[4] =
    {
        "first", "second", "third", "fourth"
    };

    //USER INPUT
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter " << qrtOrder[i] << "-quarter sales:" << endl;
        cin >> x.qs[i];

        x.annual += x.qs[i];
        if(x.qs[i]<0){
            cout<<"Please Input Again"<<endl;
            cin>>x.qs[i];
        }
    }

    //CAKCULATE AVERAFE 
    x.avgs = x.annual/4;
}
void show(const sales s, fstream &out){
    cout<<setprecision(2)<<fixed;
    cout<<"Total Annual sales:$"<<s.annual<<endl;
    cout<<"Average Quarterly Sales:$"<<s.avgs;
    out<<"Corporate Sales Record"<<endl;
    out<<setprecision(2)<<fixed;
    out<<"Total Annual sales:$"<<s.annual<<endl;
    out<<"Average Quarterly Sales:$"<<s.avgs;
}