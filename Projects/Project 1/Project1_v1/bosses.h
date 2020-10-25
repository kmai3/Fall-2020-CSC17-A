/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bosses.h
 * Author: Kevin Mai
 *
 * Created on October 14, 2020, 11:33 AM
 */

#ifndef BOSSES_H
#define BOSSES_H

struct Boss{
    int hp; //Health Points of the Unit
    int atk; // Attack value of the Unit
    int rounds; // Amount of Rounds until unit just wins
};

#endif /* BOSSES_H */

