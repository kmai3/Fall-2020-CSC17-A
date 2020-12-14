/*
 * ProductionWorker Functions
 * 
 */
#include <iostream>
using namespace std;
#include "ProductionWorker.h"
void Prowork::calc(float uhr, int ushift){
    hrpay=uhr;
    shift=ushift;
    
    //Shift 1 is day shift
    //shift 2 is night shift
    switch(shift){
        case 1:payment=hrpay*8;break;
        case 2:payment=hrpay*8*1.5;break;
    }
}
void Prowork::discalc(){
    cout<<"The Amount you get paid is $"<<payment<<endl;
}