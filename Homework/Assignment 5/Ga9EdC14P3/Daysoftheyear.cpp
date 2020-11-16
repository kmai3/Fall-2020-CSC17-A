/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Daysoftheyear.h"
using namespace std;
void Daysoftheyear::getinfo(){
    cout<<"Enter in the Month(First Letter is Caps)"<<endl;
    cout<<"Case Sensitive"<<endl;
    cin>>month;
    cout<<"Enter in the Date"<<endl;
    cin>>day;
    nday=(month=="January")?day:(month=="February")?day+31:(month=="March")?day+59:(month=="April")?day+90:
        (month=="May")?day+121:(month=="June")?day+151:(month=="July")?day+181:(month=="August")?day+212:
        (month=="September")?day=243:(month=="October")?day+273:(month=="November")?day+304:day+334;
}
void Daysoftheyear::prnt(){
    cout<<month<<" "<<day<<" is day "<<nday<<endl;
    if(nday==365){
        cout<<"Tommorow is New Years!"<<endl;
        cout<<"Happy New Years!"<<endl;
    }
    else{
     cout<<"Tommorow is day "<<nday+1<<endl;   
    }
    if(nday==1){
        cout<<"Today is New Years"<<endl;
        cout<<"Inserting Cringy Joke....."<<endl;
        cout<<"Yesterday was last year"<<endl;
    }else{
        cout<<"Yesterday was day "<<nday-1<<endl;
    }
}