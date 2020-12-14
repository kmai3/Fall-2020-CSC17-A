/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GradedActivity.h
 * Author: xWing
 *
 * Created on December 3, 2020, 9:57 PM
 */

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
class GradedActivity{
private:
    float score;
public:
    GradedActivity(){
        score = 0;
    }
    GradedActivity(float s){
        score = s;
    }
    //Mutator Function
    void setscore(float s){
        score = s;
    }
    //Accessor Functions
    float getscore() const{
        return score;
    }
    char getLetterGrade() const;
};


#endif /* GRADEDACTIVITY_H */

