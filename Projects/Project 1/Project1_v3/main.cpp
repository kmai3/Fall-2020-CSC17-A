/*
 * File:   main.cpp
 * Author: Kevin Mai
 * Created on October 14, 2020, 11:00AM
 * Purpose: Dungeons and Dragon Board Game Project
 */

#include <iostream> //I/O Library
#include <string> // for strings
#include <iomanip> //setw
#include <cmath> // For sqrt and pow functions
#include <fstream> // To put in files
#include <cstdlib> //Random Seed Time, Exit Function 
#include <ctime> //Random Seed
using namespace std;

//User Libraries
#include "mobs.h"
#include "heroes.h"
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes
char start1(); // Basic Menu to Start the Game
void start2(char , char &, string &);
void smobs(string[][4]); //Displays the Mobs able to be fought 
int atkcalc(int, int); // Calculates Attack value
void compsc(); // Shows Completion Value 
bool gfight (string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
bool sfight (string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
bool ofight (string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
bool sGfght (string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
bool dMfght (string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
bool dfight(string [], int &, int ,int ,int &, 
             float &, int , int , int , int , string [][4], Mobs *);
Mobs *mobvalues();
void game(float &, char );
void destroy(Mobs *);
void display(fstream &, string, char, float);
//Execution of Code Begins here
int main(int argc, char** argv) {
    
    //Declare all variables for this function
    float score;
    int magehp, //The hp value of the mage
        fhp, // The HP of the fighter
        rhp, //The HP value of the ranger
        job; //job
    char njob, //Job represented in a number
         start; // Start of the game Menu
    string name; //Name of the Player
    bool cont;
    fstream board;
    fstream binsc;
    board.open("score.txt", ios::in | ios::out);
    //Initialize the code
    //Balancing Area Change Values to make it harder or easier
    magehp=100;
    fhp=300;
    rhp=150;
    score=100;
    
    //Scoreboard called score.txt
    
    //Start up of the Game
    start=start1();
    start2(start, njob, name);
    //Attack values depend on xp and class 
    game(score, njob);
    //Score Showing in the txt file
    display(board, name, njob, score);
    //Clean up the code, close files, deallocate memory, etc...
    //Exit stage right
    return 0;
}
char start1(){
    char start;
    cout<<"Dungeon and Dragons AI ver"<<endl;
    cout<<"Enter 1 to Start, or Enter 2 for more information"<<endl;
    cout<<"Enter Anything Else to show the Previous Score"<<endl;
    cin>>start;
    return start;
}
void start2(char start, char &njob, string &name){
    int vstart=start-48; //Converts into menu options with Type Casting
    if (vstart==2) //Choice 2 Gives more information about the game 
    {
        cout<<"This is based off the board game Dungeons and Dragons"<<endl;
        cout<<"The objective of the game is to clear the dungeon"<<endl;
        cout<<"To clear the Dungeon you must kill 5 main monsters"<<endl;
        cout<<"Each monster is weak to a certain attribute"<<endl;
        cout<<"Read the game information to learn more about this"<<endl;
        cout<<"You are to pick from 3 different classes"<<endl;
        start=1;
    }
    else if (vstart==1) // After Starting, Player chooses a class
    {
        cout<<"Enter Your Name for Scoreboard"<<endl;
        cin>>name;
        cout<<"Pick a Class"<<endl;
        cout<<"1=Mage, 2=Ranger, or 3=Fighter"<<endl;
        cout<<"Enter in the Number Associated "<<endl;
        cin>>njob;
        while (njob>51 || njob<48)
        {
            cout<<"Please Enter your Class Again"<<endl;
            cin>>njob;
        }
    }
    else
    {
        cout<<"nothing yet"<<endl;
    }
}
void smobs(string bosses[][4]){
    cout<<"Mob List"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
        cout<<setw(15)<<bosses[i][j]<<"->";
        }
        cout<<endl;
    }
}
int atkcalc(int njob, int xp){
    int atk;
    atk=(njob==49) ? 2+2*xp:(njob==50)? 2+pow(2,xp):4+xp; 
    return atk;
}
void compsc(){
    static int cscore=0; //Completion Score 
    cout<<"Your Completion Score is "<<cscore<<endl;
    cscore++; 
}
bool gfight(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You enter in the Dungeon and around the corner you see"<<endl;
         cout<<"A goblin approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The Goblin has "<<x->gob->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->gob->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->gob->hp=x->gob->hp-(atk*cd);break;
                 case 2: x->gob->hp=x->gob->hp-(atk/cd);break;
                 case 3: x->gob->hp=x->gob->hp-atk;break;
                 case 4: x->gob->hp=x->gob->hp-atk;break;
                 default: cout<<"Pick one of the numbers provided"<<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->gob->rounds-=1;
         hp-=x->gob->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->gob->rounds>0 && x->gob->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->gob->hp<=0){ //If Kills the Goblin
         cout<<"Congrats You have killed the Goblin"<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->gob->rounds<=0){ //If Reinforcements came
         cout<<"Goblin Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if goblin was killed
     {
         cout<<"Down the Dungeon you go"<<endl;
     }
     return cont;
}
bool sfight(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You went further down the dungeon"<<endl;
         cout<<"A Skeleton approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The Skeleton has "<<x->skele->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->skele->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->skele->hp=x->skele->hp-(atk/cd);break;
                 case 2: x->skele->hp=x->skele->hp-atk;break;
                 case 3: x->skele->hp=x->skele->hp-atk;break;
                 case 4: x->skele->hp=x->skele->hp-(atk*cd);break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->skele->rounds-=1;
         hp-=x->skele->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->skele->rounds>0 && x->skele->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->skele->hp<=0){ //If Kills the Skeleton
         cout<<"Congrats You have killed the Skeleton"<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->skele->rounds<=0){ //If Reinforcements came
         cout<<"Skeleton Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if skeleton was killed
     {
         cout<<"Down the Dungeon you go"<<endl;
     }
     return cont;
}
bool ofight(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You went further down the dungeon"<<endl;
         cout<<"A "<<bosses[0][2]<<"approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The "<<bosses[0][2]<<" has "<<x->ogre->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->ogre->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->ogre->hp=x->ogre->hp-(atk*cd);break;
                 case 2: x->ogre->hp=x->ogre->hp-atk;break;
                 case 3: x->ogre->hp=x->ogre->hp-atk;break;
                 case 4: x->ogre->hp=x->ogre->hp-(atk/cd);break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->ogre->rounds-=1;
         hp-=x->ogre->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->ogre->rounds>0 && x->ogre->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->ogre->hp<=0){ //If Kills the Ogre
         cout<<"Congrats You have killed the "<<bosses[0][2]<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->ogre->rounds<=0){ //If Reinforcements came
         cout<<bosses[0][2]<<"Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if ogre was killed
     {
         cout<<"Down the Dungeon you go"<<endl;
     }
     return cont;
}
bool sGfght(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You went further down the dungeon"<<endl;
         cout<<"A "<<bosses[1][0]<<"approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The "<<bosses[1][0]<<" has "<<x->gskele->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->gskele->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->gskele->hp=x->gskele->hp-(atk/cd);break;
                 case 2: x->gskele->hp=x->gskele->hp-atk;break;
                 case 3: x->gskele->hp=x->gskele->hp-atk;break;
                 case 4: x->gskele->hp=x->gskele->hp-(atk*cd);break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->gskele->rounds-=1;
         hp-=x->gskele->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->gskele->rounds>0 && x->gskele->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->gskele->hp<=0){ //If Kills the Skeleton Giant
         cout<<"Congrats You have killed the "<<bosses[1][0]<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->gskele->rounds<=0){ //If Reinforcements came
         cout<<bosses[1][0]<<"Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if skeleton giant was killed
     {
         cout<<"Down the Dungeon you go"<<endl;
     }
     return cont;
}
bool dMfght(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You went further down the dungeon"<<endl;
         cout<<"A "<<bosses[1][1]<<"approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The "<<bosses[1][1]<<" has "<<x->dmage->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->dmage->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->dmage->hp=x->dmage->hp-(atk/cd);break;
                 case 2: x->dmage->hp=x->dmage->hp-(atk/cd);break;
                 case 3: x->dmage->hp=x->dmage->hp-(atk*cd);break;
                 case 4: x->dmage->hp=x->dmage->hp-(atk/cd);break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->dmage->rounds-=1;
         hp-=x->dmage->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->dmage->rounds>0 && x->dmage->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->dmage->hp<=0){ //If Kills the dark mage
         cout<<"Congrats You have killed the "<<bosses[1][1]<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->dmage->rounds<=0){ //If Reinforcements came
         cout<<bosses[1][1]<<"Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if the dark mage was defeated
     {
         cout<<"Down the Dungeon you go"<<endl;
         cout<<"Fighting the Dark Mage has taught you how to self heal"<<endl;
         cout<<"You can now self heal and block at the same time"<<endl;
         cout<<"Added on the next Update"<<endl;
     }
     return cont;
}
bool dfight(string rclass[], int &hp, int atk,int cd,int &xp, 
             float &score, int move1, int move2, 
            int move3, int move4, string bosses[][4], Mobs *x){
    bool cont;
    do{ //Battle Begins!
         cout<<"You are nearing the end of the dungeon"<<endl;
         cout<<"A "<<bosses[1][2]<<"approaches"<<endl; 
         cout<<"Battle"<<endl;
             int dmg1;
             cout<<fixed;
             cout<<"The "<<bosses[1][2]<<" has "<<x->dragon->hp<<" Hp"<<endl;
             cout<<"You have "<<hp<<"Hp"<<endl;
             cout<<"You have "<<x->dragon->rounds;
             cout<<" rounds left before reinforcements"<<endl;
             cout<<"Pick your ability "<<endl;
             cout<<"Enter 1 for "<<rclass[move1]<<endl;
             cout<<"Enter 2 for "<<rclass[move2]<<endl; 
             cout<<"Enter 3 for "<<rclass[move3]<<endl;
             cout<<"Enter 4 for "<<rclass[move4]<<endl;
             cout<<"Enter 5 to Block and Heal"<<endl;
             cin>>dmg1;
             switch(dmg1){ //Menu for picking abilities 
                 case 1: x->dragon->hp=x->dragon->hp-(atk/cd);break;
                 case 2: x->dragon->hp=x->dragon->hp-(atk*cd);break;
                 case 3: x->dragon->hp=x->dragon->hp-(atk/cd);break;
                 case 4: x->dragon->hp=x->dragon->hp-(atk/cd);break;
                 case 5: hp+=x->dragon->atk+atk;break;
                 default: cout<<"What ability did you use?, hurry you are dying"
                         <<endl;
                 cin>>dmg1;break;
             }
         score-=1;
         x->dragon->rounds-=1;
         hp-=x->dragon->atk;
         //Stops the loops when someone dies or reinforcements come 
     }while(hp>0 && x->dragon->rounds>0 && x->dragon->hp>0); 
     for(int i=1; i<25; i++) //For Visual Seperation of the End Game 
     {
         cout<<"*";
     }
     cout<<endl;
     if (x->dragon->hp<=0){ //If Kills the dragon
         cout<<"Congrats You have killed the "<<bosses[1][2]<<endl;
         cout<<"You have gained a Level"<<endl;
         xp=xp+1;
         cont=true;
     }
     if (x->dragon->rounds<=0){ //If Reinforcements came
         cout<<bosses[1][2]<<"Reinforcements have came"<<endl;
         cout<<"Game Over"<<endl;
         score=score/2;
         cont=false;
     }
     if (hp<=0){ //If Player Died 
         cout<<"You have Died"<<endl;
         cout<<"Game Over"<<endl;
         score=score/4;
         cont=false;
     }
     if(cont==true) //continues down the dungeon if dragon was killed
     {
         cout<<"You Returned Home with your Glory"<<endl;
     }
     return cont;
}
Mobs *mobvalues(){
    //Boss Values
    Mobs *x=new Mobs;
    x->gob=new Boss;
    x->skele=new Boss;
    x->ogre=new Boss;
    x->gskele=new Boss;
    x->dmage=new Boss;
    x->dragon=new Boss;
    x->gob->hp=15;
    x->skele->hp=20;
    x->ogre->hp=30;
    x->gskele->hp=56;
    x->dmage->hp=40;
    x->dragon->hp=100;
    //Attack Values
    x->gob->atk=1;
    x->skele->atk=2;
    x->ogre->atk=5;
    x->gskele->atk=10;
    x->dmage->atk=20;
    x->dragon->atk=20;
    //Amount of Rounds to beat the bosses
    x->gob->rounds=9;
    x->skele->rounds=5;
    x->ogre->rounds=5;
    x->gskele->rounds=5;
    x->dmage->rounds=10;
    x->dragon->rounds=20;
    return x;
}
void game(float &score, char njob){
    int hp=(njob==49)?100:(njob==50)?150:300; //Declared Hp based on class
    int xp=1;
    bool cont;
    int atk;
    Mobs *easy=mobvalues();
    string rclass[12]={"Fireball", "Hydro Cannon", "Force Smash", "Earthquake",
    "Fire Arrow", "Ice Shot", "Charged Shot", "Metal Bolt", "Fire Sword",
    "Hydro Slash", "Heavy Strike", "Obsidian Pillar"};
    string bosses[3][4]={{"Goblin", "Skeleton", "Ogre"},
                         {"Skeleton Giant", "Dark Mage", "Dragon"}};
    srand(static_cast<unsigned int>(time(0)));
    unsigned int cd = rand() % 4 + 2; //Cd is the crit damage 
    int moves1, moves2, moves3, moves4; //Used to Determine rclass index
    smobs(bosses);
    if(njob==49){
        moves1=MAGEF;
        moves2=MAGEH;
        moves3=MAGEP;
        moves4=MAGEE;
    }
    else if(njob==50){
        moves1=RANGEF;
        moves2=RANGEH;
        moves3=RANGEP;
        moves4=RANGEE;
    }
    else if(njob==51){
        moves1=FIGHTF;
        moves2=FIGHTH;
        moves3=FIGHTP;
        moves4=FIGHTE;
    }
    atk=atkcalc(njob,xp); 
    compsc();
    cont=gfight(rclass, hp, atk, cd, xp, 
                score, moves1, moves2, moves3, moves4,bosses, easy); //First Goblin Fight
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      atk=atkcalc(njob,xp); //Levels up and Changes Attack Value 
      cont=sfight(rclass, hp, atk, cd, xp, score, moves1, moves2, moves3, moves4,
              bosses, easy);//Skeleton Fight 
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      atk=atkcalc(njob,xp); //Levels up and Changes Attack Value 
      cont=ofight(rclass, hp, atk, cd, xp,
                     score, moves1, moves2, moves3, moves4, bosses, easy);//Ogre Fight
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      atk=atkcalc(njob,xp); //Levels up and Changes Attack Value 
      cont=sGfght(rclass, hp, atk, cd, xp,score, moves1, moves2, moves3, 
                    moves4, bosses, easy);
      //^Skeleton Giant Fight
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      atk=atkcalc(njob,xp); //Levels up and Changes Attack Value 
      cont=dMfght(rclass, hp, atk, cd, xp, score, moves1, moves2, moves3, 
                    moves4, bosses, easy);
      //^Dark Mage Fight
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      atk=atkcalc(njob,xp); //Levels up and Changes Attack Value 
      cont=dfight(rclass, hp, atk, cd, xp, score, moves1, moves2, moves3, moves4, 
                    bosses, easy);
      //^Dragon fight
      if (cont=false){ //Checks for Game Over
          exit(0);
      }
      else compsc();
      destroy(easy);
}
void destroy(Mobs *x){
    delete x;
}
void display(fstream &file, string name, char njob, float score){
    string role=(njob==49)?"Mage":(njob==50)?"Ranger":"Fighter";
    file << fixed;
    file << "Name: " << name << endl;
    file << "Class " << role << endl;
    file << "Score " << score << endl <<endl ;
    cout << fixed;
    cout << "Name: " << name << endl;
    cout << "Class " << role << endl;
    cout << "Score " << score << endl << endl;
}