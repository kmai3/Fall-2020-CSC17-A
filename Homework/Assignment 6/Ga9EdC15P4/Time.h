/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: xWing
 *
 * Created on December 3, 2020, 9:12 PM
 */

#ifndef TIME_H
#define TIME_H
class Time{
protected:
    int hour;
    int min;
    int sec;
public:
    //Default Constructor
    Time(){
        hour =0; min=0; sec=0;
    }
    Time(int h, int m, int s){
        hour = h; min = m; sec = s;
    }
    //Accessor Function
    int getHour() const{
        return min;
    }
    int getMin() const{
        return min;
    }
    int getsec()const {
        return sec;
        }
    // Military Time
    void mtime();
    //Regular Time
    void rtime();
};


#endif /* TIME_H */

