/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Inventory.h"
using namespace std;
void Inventory::setdefault(){
    nitem=0;
    quant=0;
    cost=0;
    totalc=0;
}
void Inventory::getinfo(){
    cout<<"What is the Item Number"<<endl;
    cin>>nitem;
    while(nitem<0){
        cout<<"Stop adding negative numbers idiot"<<endl;
        cin>>nitem;
    }
    cout<<"How much of that Item is There?"<<endl;
    cin>>quant;
    while(quant<0){
        cout<<"Stop adding negative numbers idiot"<<endl;
        cin>>quant;
    }
    cout<<"What is the cost of the individual item?"<<endl;
    cin>>cost;
    while(cost<0){
        cout<<"Stop adding negative numbers idiot"<<endl;
        cin>>cost;
    }
    totalc=cost*quant;
}
void Inventory::prnt(){
    cout<<"Item Id: "<<nitem<<endl;
    cout<<"Amount of The Item: "<<quant<<endl;
    cout<<"Cost Per Item: "<<cost<<endl;
    cout<<"Total Cost of the Inventory: "<<totalc<<endl;
}

