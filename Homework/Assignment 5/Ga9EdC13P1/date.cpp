/*
 * File:
 * Author: Kevin Mai
 * Created on November 10, 2020
 * Purpose Date Implementation
 */
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

void Date::getinfo(){
    cout<<"Enter all the information as a numeric value"<<endl;
    cout<<"Enter the Month"<<endl;
    cin>>month;
    while(month > 12 || month < 1){
        cout<<"You didn't input a valid month input again"<<endl;
        cin>>month;
    }
    cout<<"Enter the Date"<<endl;
    cin>>day;
    while (day > 31 || day < 1){
        cout<<"You didn't input a valid numeric date input again"<<endl;
        cin>>day;
    }
    cout<<"Enter the Year"<<endl;
    cin>>year;
    
}
void Date::prnt1(){
    cout<<"Date in Numeric Format(USA FORMAT)"<<endl;
    cout<<month<<" / "<<day<<" / "<<year<<endl;
}
void Date::prnt2(){
    string dmonth=(month==1)?"January":(month==2)?"February":(month==3)?"March":
        (month==4)?"April":(month==5)?"May":(month==6)?"June":(month==7)?"July":
        (month==8)?"August":(month==9)?"September":(month==10)?"August":
        (month==11)?"November":"December";
    cout<<"Date in Readable format(USA)"<<endl;
    cout<<dmonth<<" "<<day<<" , "<<year<<endl;
}
void Date::prnt3(){
    string dmonth=(month==1)?"January":(month==2)?"February":(month==3)?"March":
        (month==4)?"April":(month==5)?"May":(month==6)?"June":(month==7)?"July":
        (month==8)?"August":(month==9)?"September":(month==10)?"August":
        (month==11)?"November":"December";
    cout<<"Date in Readable Format(Universal)"<<endl;
    cout<<day<<" "<<dmonth<<" , "<<year<<endl;
}
