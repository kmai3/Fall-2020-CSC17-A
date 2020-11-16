/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Numbers.h"
using namespace std;
void Numbers::convert(){
     //Calculate the 1000's, 100's, 10's and 1's
    int t=0;
        int ntt=number/1000%10;
        switch (ntt)
        {
            case 1:cout<<"One Thousand ";break;
            case 2:cout<<"Two Thousand ";break;
            case 3:cout<<"Three Thousand ";break;
            case 4:cout<<"Four Thousand ";break;
            case 5:cout<<"Five Thousand ";break;
            case 6:cout<<"Six Thousand ";break;
            case 7:cout<<"Seven Thousand ";break;
            case 8:cout<<"Eight Thousand ";break;
            case 9:cout<<"Nine Thousand ";break;
        }
        
        int nh=number/100%10;
        switch (nh)
        {
            case 1:cout<<"One Hundred ";break;
            case 2:cout<<"Two Hundred ";break;
            case 3:cout<<"Three Hundred ";break;
            case 4:cout<<"Four Hundred ";break;
            case 5:cout<<"Five Hundred ";break;
            case 6:cout<<"Six Hundred ";break;
            case 7:cout<<"Seven Hundred ";break;
            case 8:cout<<"Eight Hundred ";break;
            case 9:cout<<"Nine Hundred ";break;
        }
    int nt=number/10%10;
    switch (nt)
    {
        case 1:t=1;break;
        case 2:cout<<"Twenty ";break;
        case 3:cout<<"Thirty ";break;
        case 4:cout<<"Forty ";break;
        case 5:cout<<"Fifty ";break;
        case 6:cout<<"Sixty ";break;
        case 7:cout<<"Seventy ";break;
        case 8:cout<<"Eighty ";break;
        case 9:cout<<"Ninety ";break;
    }
    if (t==1)
    {
        int nO=number%10;
        switch(nO)
        {
            case 0:cout<<"Ten ";break;
            case 1:cout<<"Eleven ";break;
            case 2:cout<<"Twelve ";break;
            case 3:cout<<"Thirteen ";break;
            case 4:cout<<"Fourteen ";break;
            case 5:cout<<"Fiftheen ";break;
            case 6:cout<<"Sixteen ";break;
            case 7:cout<<"Seventeen ";break;
            case 8:cout<<"Eighteen ";break;
            case 9:cout<<"Nineteen ";break;
        }
    }
    else
    {
    int nO=number%10;
        switch(nO)
        {
            case 1:cout<<"One ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
        }
    }
}
void Numbers::getnum(){ 
    cout<<"Enter a Number to get converted from 0 = 9999"<<endl;
    cin>>number;
}
       