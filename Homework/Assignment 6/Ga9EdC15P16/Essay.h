/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essay.h
 * Author: xWing
 *
 * Created on December 3, 2020, 10:03 PM
 */

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"
class Essay : public GradedActivity{
private:
    int gram;
    int spell;
    int length;
    int content;
public:
    Essay(){
        gram=0; spell=0; length=0; content=0;
    }
    Essay(int g,int s,int l,int c){
        gram=g; spell=s; length=l; content=c;
        GradedActivity(g+s+l+c);
        setscore(g+s+l+c);
    }
        
};


#endif /* ESSAY_H */

