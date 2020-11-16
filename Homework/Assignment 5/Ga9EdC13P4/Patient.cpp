/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Patient.h"
#include <iostream>
#include <string>
using namespace std;

void Patient::getinfo(){
    cout<<"Enter in your First Name"<<endl;
    cin>>fname;
    cout<<"Enter in your Middle Name"<<endl;
    cin>>mname;
    cout<<"Enter in your last Name"<<endl;
    cin>>lname;
    cout<<"Enter in your Address"<<endl;
    getline(cin, address);
    cout<<"Enter in your City"<<endl;
    cin>>city;
    cout<<"Enter in your State"<<endl;
    cin>>state;
    cout<<"Enter in your Zip Code"<<endl;
    cin>>zcode;
    cout<<"Enter the name of the Emergency Contact"<<endl;
    cin>>ename;
    cout<<"Enter in the Phone Number of the Emergency Contact"<<endl;
    cin>>enumber;
}
void Patient::prnt(){
    cout<<"Name: "<<fname<<" "<<mname<<" "<<lname<<endl;
    cout<<"Address: "<<address<<" "<<city<<" "<<state<<" "<<zcode<<endl;
    cout<<"Emergency Contact: "<<ename<<"Reachable at: "<<enumber<<endl;
}