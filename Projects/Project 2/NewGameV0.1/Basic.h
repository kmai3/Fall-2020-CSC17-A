/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Basic.h
 * Author: xWing
 *
 * Created on December 13, 2020, 8:31 PM
 */

#ifndef BASIC_H
#define BASIC_H
#include "BossFight.h"
class Basic : public BossFight
{
private: 
    unsigned char hp;
    unsigned char xp;
    unsigned char atk;
    unsigned char *score;
    unsigned char cd;
    Boss gob;
    Boss skele;
    Boss ogre; 
    Boss gskele;
    Boss dmage;
    Boss dragon;
public:
    Basic(){
        hp=0; atk=0; xp=0; score=0;
    }
    Basic(unsigned char);
    ~Basic(){
        delete [] score;
    }
    void atkcalc();    
    unsigned char showcd(){
        return cd;
    }
    
};
#endif /* BASIC_H */
/* 
 * UML Code
Basic
---------------------------
- hp : unsigned char
- xp : unsigned char
- atk : unsigned char
- *score : unsigned char
- cd : unsigned char
- gob : Boss
- skele : Boss
- ogre : Boss
- gskele : Boss
- dmage : Boss
- dragon : Boss
---------------------------
+ Basic() :
+ Basic(njob : unsigned char):
+ Basic();
+ atkcalc() : void
+ showcd() : unsigned char
*/