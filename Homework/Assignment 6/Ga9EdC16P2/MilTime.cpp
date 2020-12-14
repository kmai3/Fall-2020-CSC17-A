/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Time.h"
#include <iostream>
using namespace std;
void Time::mtime(){
    cout<<"MIlitary Time"<<endl;
    cout<< getHour() << getMin() << " Hours" << endl;
}
void Time::rtime(){
    if(getHour()>12){
        cout<<"Pm/Am Citizen Time"<<endl;
        cout<<getHour()-12<<":"<<getMin()<<":"<<getsec()<<" PM"<<endl;
    }else{
        cout<<"Pm/Am Citizen Time"<<endl;
        cout<<getHour()<<":"<<getMin()<<":"<<getsec()<<" Am"<<endl;
    }
}
