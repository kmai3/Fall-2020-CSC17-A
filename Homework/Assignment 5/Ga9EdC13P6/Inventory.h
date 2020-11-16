/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: xWing
 *
 * Created on November 10, 2020, 9:42 PM
 */

#ifndef INVENTORY_H
#define INVENTORY_H
class Inventory{
    private:
        int nitem; //Item Number
        int quant; //Quantity
        float cost; // Cost
        float totalc; //Total Cost
    public:
        void setdefault();
        void getinfo();
        void prnt();
        
};


#endif /* INVENTORY_H */

