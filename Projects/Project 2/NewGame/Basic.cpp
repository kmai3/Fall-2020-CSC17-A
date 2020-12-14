/*
 * Basic's Source File
 * By Kevin Mai
 * Main Stage Piece of Code of the Game
 */
#include <iostream>
#include <string>
#include <cstdlib> //Random Seed Time, Exit Function 
#include <ctime> //Random Seed
#include <iomanip> //setw
using namespace std;
#include "Basic.h"
Basic::Basic(unsigned char njob){
    srand(static_cast<unsigned int>(time(0)));
    cd = rand() % 4 + 2; //Cd is the crit damage 
    
    //Mob values Declaration
    
}