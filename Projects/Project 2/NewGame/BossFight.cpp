/*
 * For Boss Fight Class
 * By Kevin Mai
 * Used for Array of Objects in the DnD Simplified Game 
 */
#include <iostream> 
#include <string>
#include "BossFight.h"
using namespace std;
bool BossFight::mob(unsigned char hp, unsigned char atk, unsigned char cd, Boss *x, string rclass[]){
    bool cont;
    do{ //Battle Begins!
         cout<<"You went further down the dungeon"<<endl;
         cout<<"A "<<x->name<<" approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The "<<x->name<<" has "<<x->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[1]<<endl;
             cout<<"Enter 2 for "<<rclass[2]<<endl; 
             cout<<"Enter 3 for "<<rclass[3]<<endl;
             cout<<"Enter 4 for "<<rclass[4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->hp=x->hp-(atk*cd);break;
                 case 2: x->hp=x->hp-atk;break;
                 case 3: x->hp=x->hp-atk;break;
                 case 4: x->hp=x->hp-(atk/cd);break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         x->rounds-=1;
         hp-=x->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->rounds>0 && x->hp>0); 
     if (x->hp<=0){ //If Kills the Ogre
         cout<<"Congrats You have killed the "<<x->name<<endl;
         cout<<"You have gained a Level"<<endl;
         cont=true;
     }
     if (x->rounds<=0){ //If Reinforcements came
         cout<<x->name<<"'s Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         cont=false;
     }
     return cont;
}
