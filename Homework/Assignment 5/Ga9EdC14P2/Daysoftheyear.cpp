/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Daysoftheyear.h"
using namespace std;
void Daysoftheyear::getinfo(){
    cout<<"Enter in the Day Number"<<endl;
    cin>>nday;
    month=(nday<31)?"January":(nday<59)?"February":(nday<90)?"March":(nday<120)?"April":
        (nday<151)?"May":(nday<181)?"June":(nday<212)?"July":(nday<243)?"August":
        (nday<273)?"September":(nday<304)?"October":(nday<334)?"November":"December";
    day=(nday<31)?nday:(nday<59)?nday-31:(nday<90)?nday-59:(nday<120)?nday-90:
        (nday<151)?nday-120:(nday<181)?nday-151:(nday<212)?nday-181:(nday<243)?nday-212:
        (nday<273)?nday-243:(nday<304)?nday-273:(nday<334)?nday-304:nday-334;
}
void Daysoftheyear::prnt(){
    cout<<"Day "<<nday<<" would be "<<month<<" "<<day<<endl;
}