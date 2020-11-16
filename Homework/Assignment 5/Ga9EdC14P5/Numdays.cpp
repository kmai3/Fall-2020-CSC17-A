/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <iomanip>
#include "Numdays.h"
using namespace std;
void Numdays::getinfo(){
    cout<<"Enter in Employee Name and Id"<<endl;
    getline(cin, name);
    cin>>id;
    cout<<"Enter in Max Amount of Sick Leave Days"<<endl;
    cin>>maxsick;
    cout<<"Enter amount of sick days taken"<<endl;
    cin>>sick;
    cout<<"Enter Max Amount of Vacation"<<endl;
    cin>>maxvac;
    while(maxvac>240){
        cout"HEY! company policy states max 240 paid vacation time, ENTER IT AGAIN"<<endl;
        cin>>maxvac;
    }
    cout<<"Enter amount of paid Vacation time"<<endl;
    cin>>vac;
    cout<<"Enter in max amount of unpaid vacation time"<<endl;
    cin>>munpaid;
    cout<<"Enter in amount of unpaid vacation time"<<endl;
    cin>>unpaid;
}
void Numdays::prnt(){ 
    cout<<"Employee Name and ID "<<name<<" "<<id<<endl;
    cout<<"Max Sick Days and Sick Days "<<maxsick<<" "<<sick<<endl;
    cout<<"Max Paid Vacation and Amount of Days Taken for Vacation "<<maxvac<<" "<<vac<<endl;
    cout<<"Max Unpaid Vacation and Unpaid Vacation Taken "<<munpaid<<" "<<unpaid<<endl;
    
}