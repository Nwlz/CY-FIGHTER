#ifndef HEAD
#define HEAD
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>

    
    typedef struct{                                        //Struct for fighter's special attacks
        char name[20];
        float value;
        int load;                                          //When load = 0 : special attack can be used
        int wait;                                          //Number of turns needed to 'charge' the special attack
        int att;
        int def;
        int agi;
        int spd;
        int target;                                      // 0 : allie ; 1 : ennemi
        char descr[100];
    }Technique;
 
    typedef struct{                                     //Struct for fighter's infos 
        char name[20];
        int life;
        float att;
        float def;
        float agi;
        float spd;
        Technique comp1;
        Technique comp2;
        Technique comp3;
    }Fighter;
 

/*All functions to play and dipslay (can be found in the functions.c file)*/

void showlist();                                                                    
void build(Fighter* b,int choice);
void attack(Fighter player,Fighter *adv);
void competence(Technique *comp, Fighter team1[3], Fighter team2[3],int targ);
void showtab(Fighter team[3],int nb);
void choiceteam(Fighter team[3]);
void choicecomputer(Fighter team2[3]);
void computerturn(Fighter team1[3],Fighter team2[3],int level);
void showfeatures(Fighter team[3],int fighter);
void turnplayervsplayer(Fighter team1[3],Fighter team2[3]);
void turnplayervscomputer(Fighter team1[3],Fighter team2[3], int level);
void menu(Fighter team1[3],Fighter team2[3]);

#endif