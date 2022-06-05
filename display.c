#include "head.h"


void showlist(){                                                //Displays list of all fighters and the linked info (life, att, def, agi, vit, features)
    int i;
    for(i=0;i<40;i++){
        printf("_");
    }
    printf("LIST OF CHARACTERS");
    for(i=0;i<41;i++){
        printf("_");
    }
    printf("\n");
    for(i=0;i<99;i++){
        printf(" ");
    }
    printf("|");

    printf("\n   Name   |");
    printf("   Life   |");
    printf("  Attack  |");
    printf("  Defense |");
    printf("  Agility |");
    printf("  Speed   |");
    printf("           Speciality            |\n");
    for(i=0;i<99;i++){
        printf(" ");
    }
    printf("|\n");

    printf("1| ");
    printf("Braise |");
    printf("   50     |");
    printf("  60      |");
    printf("  47      |");
    printf("  20      |");
    printf("  30      |");
    printf("           Fire                  |\n");
    printf("2| ");
    printf("Aquada |");
    printf("   50     |");
    printf("  60      |");
    printf("  40      |");
    printf("  20      |");
    printf("  35      |");
    printf("           Water                 |\n");
    printf("3| ");
    printf("Reaxy  |");
    printf("   50     |");
    printf("  68      |");
    printf("  23      |");
    printf("  15      |");
    printf("  50      |");
    printf("           Air                   |\n");
    printf("4| ");
    printf("Terry  |");
    printf("   50     |");
    printf("  59      |");
    printf("  48      |");
    printf("  25      |");
    printf("  40      |");
    printf("           Earth                 |\n");
    printf("5| ");
    printf("Denosya|");
    printf("   50     |");
    printf("  48      |");
    printf("  39      |");
    printf("  30      |");
    printf("  21      |");
    printf("           Vibrations            |\n");
    printf("6| ");
    printf("Lusce  |");
    printf("   50     |");
    printf("  48      |");
    printf("  30      |");
    printf("  34      |");
    printf("  60      |");
    printf("           Light                 |\n");
    printf("7| ");
    printf("Zenkra |");
    printf("   50     |");
    printf("  51      |");
    printf("  50      |");
    printf("  15      |");
    printf("  20      |");
    printf("           Darkness              |\n");
    printf("8| ");
    printf("Raito  |");
    printf("   50     |");
    printf("  42      |");
    printf("  20      |");
    printf("  42      |");
    printf("  80      |");
    printf("           Speed                 |\n");
    printf("9| ");
    printf("Stormy |");
    printf("   50     |");
    printf("  63      |");
    printf("  25      |");
    printf("  15      |");
    printf("  36      |");
    printf("           Storm                 |\n");
    for(i=0;i<99;i++){
        printf("_");
    }
    printf("|\n");
}

void showtab(Fighter team[3],int nb){                           //Displays the evolution of the fighters' stats during the game 
    int i,j,k;
    printf("\n_Team %d",nb);                                    //Shows team by team 
    for(i=0;i<=96;i++){
        printf("_");
    }
    printf("\n");
    for(j=0;j<3;j++){
        if(team[j].life<=0){
            printf("|   %s   |D|     ",team[j].name);
        }
        else{
            printf("|   %s   |%d|    ",team[j].name,j+1);
        }
        for(i=0;i<=15;i++){
            printf(" ");
        }
    }
    printf("|\n|");
    for(k=0;k<3;k++){
        printf(" [");
        for(i=0;i<(((team[k].life)*50)/100);i++){               //Illustration for life points 
            printf("#");
        }
        for(j=0;j<25-(((team[k].life)*50)/100);j++){
            printf(" ");
        }
        if(team[k].life<10){
            printf("] 0%d lp |",team[k].life);                 //Number of life points
        }
        else{
            printf("] %d lp |",team[k].life);
        }
    }
    printf("\n");
    for(k=0;k<3;k++){
        printf("| %.f att pts                        ",team[k].att);        //Value of attack 
    }
    printf("\n");
    for(k=0;k<3;k++){
        printf("| %.f def pts                        ",team[k].def);        //value of defense 
    }
    printf("\n");
    for(k=0;k<3;k++){
        printf("| %.f agi pts                        ",team[k].agi);        //Value of agility 
    }
    printf("\n");
    for(k=0;k<3;k++){
        printf("| %.f spd pts                        ",team[k].spd);        //Value of speed
    }
}

void showfeatures(Fighter team[3],int fighter){                 //Displays fighter's special attacks 
    int i,len;
    for(i=0;i<51;i++){
        printf("_");
    }
    printf("SPECIAL ATTACKS");
    for(i=0;i<63;i++){
        printf("_");
    }
    printf("\n");
    for(i=0;i<129;i++){
        printf(" ");
    }
    printf("|");
    
    printf("\n    Name                |");                  
    printf(" Tours Actif   |");
    printf(" Tours Chargement   |");
    printf(" Description");
    for(i=0;i<55;i++){
        printf(" ");
    }
    printf("|\n");
    printf("\n");
    if(team[fighter].comp1.load==0){
        printf(" 1|");                                      //Number associated to the special attack, shows if special attack can be used
    }
    else{
        printf(" x|");                                      //If special attack cannot be used, 'x' shows instead 
    }
    printf(" %s",team[fighter].comp1.name);                 //Name of the attack 
    len = strlen(team[fighter].comp1.name);
    for(i=0;i<(20-len);i++){
        printf(" ");
    }
    printf("|");
    printf(" %d             |",team[fighter].comp1.load);       //For example, Load = 0 : Special attack can be used, Load = 1 : Need to wait the next turn to use it 
    printf(" %d                  |",team[fighter].comp1.wait);  
    printf(" %s\n",team[fighter].comp1.descr);                  //Description/Explanation of the special attack
    len = strlen(team[fighter].comp1.descr);
    if(team[fighter].comp2.load==0){
        printf(" 2|");                                          //Same as above for the rest 
    }
    else{
        printf(" x|");
    }
    printf(" %s",team[fighter].comp2.name);
    len = strlen(team[fighter].comp2.name);
    for(i=0;i<(20-len);i++){
        printf(" ");
    }
    printf("|");
    printf(" %d             |",team[fighter].comp2.load);
    printf(" %d                 |",team[fighter].comp2.wait);
    printf(" %s\n",team[fighter].comp2.descr);
    if(team[fighter].comp3.load==0){
        printf(" 3|");
    }
    else{
        printf(" x|");
    }
    printf(" %s",team[fighter].comp3.name);
    len = strlen(team[fighter].comp3.name);
    for(i=0;i<(20-len);i++){
        printf(" ");
    }
    printf("|");
    printf(" %d             |",team[fighter].comp3.load);
    printf(" %d                 |",team[fighter].comp3.wait);
    printf(" %s\n",team[fighter].comp3.descr);
    for(i=0;i<129;i++){
        printf("_");
    }
    printf("|\n");
}
