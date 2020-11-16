/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Procedure.h"
#include <iostream>
using namespace std;
void Procedure::getinfo(){
    cout<<"What is the Procedure"<<endl;
    cin>>oper;
    cout<<"What is the date of the procedure"<<endl;
    cin>>date;
    cout<<"Who is the doctor preforming the procedure"<<endl;
    cin>>doc;
    cout<<"What is the cost"<<endl;
    cin>>charge;
    
}
void Procedure::prnt(){
    cout<<"Procedure name: "<<oper<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Practitioner: "<<doc<<endl;
    cout<<"Charge: "<<charge<<endl;
}