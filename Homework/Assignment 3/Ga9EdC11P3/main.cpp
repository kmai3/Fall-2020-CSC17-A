/* 
 * File: GA9EdC11P3   
 * Author: Kevin Mai
 * Created on October 10, 2020, 9:35 PM
 * Purpose:  Weather
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
struct sales
{
    string divN; // Division
    float qs[4]; // Quarter Sales
    float avgs; //Average Quarter Sales
    float annual; //Annual Sales
};
//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void gather(sales &); //Gathers info
void show(const sales);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    sales n = {"North"};
    sales e = {"East"};
    sales w = {"West"};
    sales s = {"South"};
    
    //Initialize Variables
    gather(n);
    show(n);
    cout<<endl;
    gather(w);
    show(w);
    cout<<endl;
    gather(e);
    show(e);
    cout<<endl;
    gather(s);
    show(s);
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
    }

    //CAKCULATE AVERAFE 
    x.avgs = x.annual/4;
}
void show(const sales s){
    cout<<setprecision(2)<<fixed;
    cout<<"Total Annual sales:$"<<s.annual<<endl;
    cout<<"Average Quarterly Sales:$"<<s.avgs;
}