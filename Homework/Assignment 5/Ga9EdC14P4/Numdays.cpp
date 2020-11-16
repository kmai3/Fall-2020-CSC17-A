/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <iomanip>
#include "Numdays.h"
using namespace std;
void Numdays::convert(){
    cout<<"Enter the amount of hours worked"<<endl;
    cin>>hours;
    float num=hours;
    wkdays=num/8;
}
void Numdays::prnt(){ 
    cout<<fixed<<setprecision(2);
    cout<<hours<<" is equivalant to "<<wkdays<<" work days "<<endl;
}