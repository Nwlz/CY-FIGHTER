#include "head.h"

void build(Fighter* b,int choice){                          //To build a fighter from the .txt file
    Technique t1,t2,t3;                                     //Three special attacks
    Technique *tech1=NULL,*tech2=NULL,*tech3=NULL;
    FILE* perso;
    perso=fopen("perso.txt","r");
    tech1=&t1;
    tech2=&t2;
    tech3=&t3;
 
    rewind(perso);
    char n,m;
     
    if(choice==1){                                          //Build fighter 1
        fgetc(perso);
        fgetc(perso);
    }
    else if(choice==2){                                    //Build fighter 2
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='2' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==3){                                    //Build fighter 3
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='3' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==4){                                   //Build fighter 4
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='4' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==5){                                 //Build fighter 5
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='5' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==6){                                 //Build fighter 6
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='6' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==7){                                 //Build fighter 7
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='7' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==8){                                //Build fighter 8
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='8' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }
    else if(choice==9){                                 //Build fighter 9
        n=fgetc(perso);
        m=fgetc(perso);
        while(n!='9' ||  m!='/'){
            n=fgetc(perso);
            m=fgetc(perso);
        }
    }//Get the postion of the cursor right
     
     
    char a=fgetc(perso);
    int i=0;
 
    do{                                                 //Get the name of the first special attack (see how perso.txt is made for more info)
        tech1->name[i]=a;
        a=fgetc(perso);
        i++;
    }while(a!=';');                                    //Get each character until cursor meets ';' (meaning moving on to another category in the .tx file)
    fscanf(perso,"%f",&tech1->value);                  //Get the float after the ';' : the value 
    fgetc(perso);                                      //Place the cursor after the next ';'
    fscanf(perso,"%d",&tech1->load);                //Get the int after the ';' : load
    fgetc(perso);                                      //Place again the cursor after the met ';'
    fscanf(perso,"%d",&tech1->wait);               //Get the int after the ';' : wait
    fgetc(perso);                                      //Same method for the rest of the categories (att,def,agi,spd,target)
    fscanf(perso,"%d",&tech1->att);
    fgetc(perso);
    fscanf(perso,"%d",&tech1->def);
    fgetc(perso);
    fscanf(perso,"%d",&tech1->agi);
    fgetc(perso);
    fscanf(perso,"%d",&tech1->spd);
    fgetc(perso);
    fscanf(perso,"%d",&tech1->target);
    fgetc(perso);
    fgets(tech1->descr,100,perso);//tech1               //Get the description of the special attack
     
    a=fgetc(perso);                                     //Same method for special attack number 2
    i=0;
    do{
        tech2->name[i]=a;
        a=fgetc(perso);
        i++;
    }while(a!=';');
    fscanf(perso,"%f",&tech2->value);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->load);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->wait);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->att);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->def);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->agi);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->spd);
    fgetc(perso);
    fscanf(perso,"%d",&tech2->target);
    fgetc(perso);
    fgets(tech2->descr,100,perso);//tech2
   
   
    a=fgetc(perso);                                     //Same for special attack number 3
    i=0;
    do{
        tech3->name[i]=a;
        a=fgetc(perso);
        i++;
    }while(a!=';');
    fscanf(perso,"%f",&tech3->value);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->load);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->wait);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->att);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->def);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->agi);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->spd);
    fgetc(perso);
    fscanf(perso,"%d",&tech3->target);
    fgetc(perso);
    fgets(tech3->descr,100,perso);//tech3
     
    a=fgetc(perso);
    i=0;
    do{                                                 //Get the name of the fighter
        b->name[i]=a;
        a=fgetc(perso);
        i++;
    }while(a!=';');                                     //Get each character until cursor meet ';'
    fscanf(perso,"%d",&b->life);                        //Get the int after the ';' : life points 
    a=fgetc(perso);                                     //'Skip' the ';'
    fscanf(perso,"%f",&b->att);                         //Get the float after the ';' : attack points 
    a=fgetc(perso);                 
    fscanf(perso,"%f",&b->agi);                         //Same for the rest of the categories
    a=fgetc(perso);
    fscanf(perso,"%f",&b->def);
    a=fgetc(perso);
    fscanf(perso,"%f",&b->spd);
    b->comp1=t1;                                        //Assign the three special attacks to the fighter 
    b->comp2=t2;
    b->comp3=t3;

    fclose(perso);
}
 
void attack(Fighter player,Fighter *adv){                   //Basic attack on fighter 
    float att,def,spd,agi,damage=8.0;                       //The damage is set to 8 points 
    att=((player.att)+100)/100.0;                           //Converting the % into a multiplying factor (here +)
    spd=((player.spd)+100)/100.0;
    agi=((player.agi)+100)/100.0;
    damage=8*att*spd*agi;                                   //Applying the damage taking into account the features of the target of the attack
    adv->life=adv->life-(damage*(1-(adv->def/100.0)));      //Changing the life value of the target taking into account its defense
    if(adv->life<0){                                        //Life cannot be <0 
        adv->life=0;                                        //If the damage makes it go below 0 then its value is set to 0
    }
}

void competence(Technique *comp, Fighter team1[3], Fighter team2[3],int targ){      //Special attack on fighter (opponent or ally)
   
    if(comp->target==0){                                                            //If target = 0, attack helps ally
        int t=0,i;
        while(team1[t].life==0){                                                    //Check to help an ally that isn't dead (life!=0)
            t++;                                                                    // t = first ally in the tab that isn't dead
        }
        for(i=0+t;i<3;i++){
            if(team1[i].life<team1[t].life && team1[i].life>0){                     //Compare with other allies of the team to help the one that has the lower life value
                t=i;
            }
        }
        (team1+t)->life=((team1+t)->life)*comp->value;                              //Change the life value of the ally, gets increased by the value of the special attack used (in %)
            if(team1[t].life>50){                                                   //Life value cannot >50 
                (team1+t)->life=50;                                                 //If the help makes it go higher than that then its value is set to 50
            }
    }
    else{                                                                           //Else :  attack against opponent 
        if(comp->att==1){                                                           //If att = 1, attack changes opponent's attack value                                                      
            (team2+(targ-1))->att=((team2+(targ-1))->att)*comp->value;              //Opponent's attack value is decreased by the value of the special attack used (in %)
            (team2+(targ-1))->life=((team2+(targ-1))->life)-3;                      //Oppononent also loses three points of life 
        }
        if(comp->def==1){                                                           //Attack changes opponent's defense value
            (team2+(targ-1))->def=((team2+(targ-1))->def)*comp->value;              //Same as before
            (team2+(targ-1))->life=((team2+(targ-1))->life)-3;
        }
        if(comp->agi==1){                                                           //Same for agility
            (team2+(targ-1))->agi=((team2+(targ-1))->agi)*comp->value;
            (team2+(targ-1))->life=((team2+(targ-1))->life)-3;
        }
        if(comp->spd==1){                                                           //Same for speed
            (team2+(targ-1))->spd=((team2+(targ-1))->spd)*comp->value;
            (team2+(targ-1))->life=((team2+(targ-1))->life)-3;
        }
        comp->load=comp->wait;                                               //Value of load is set back to value of wait because special attack has been uses
       
    }
    if((team2+(targ-1))->life<0){                                            //Life cannot be < 0
        (team2+(targ-1))->life=0;                                           //If the attack makes it go below 0, then its value is set to 0
    }
}

void choiceteam(Fighter team[3]){                                                   //Choice team player(3 fighters per player)
    int i,choice=0;
    for(i=0;i<3;i++){
        do{
            printf("Build Your Team: \n Enter a player's number : ");               //Player choses a fighter (designated by a number) among the list of fighters displayed
            scanf("%d",&choice);
        }while(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5 && choice!=6 && choice!=7 && choice!=8 && choice!=9);  //There are 9 fighters, if pleyer enters a number that isn't between 1 and 9, player is asked to choose again
    build(team+i,choice);                                                           //The fighter is built and added to the player's team
    }
}

void choicecomputer(Fighter team2[3]){                                              //Build computer team (3 fighters)
    int a=0,b=0,c=0;
    srand(time(NULL));
     a=(rand()%9)+1;                                                                //Number from 1 to 9 chosen randomly
        while(a==b || b==c || a==c){                                                //Fighter can only appear once in a team
                b=(rand()%9)+1;                                                     //Choice of the two remaining fighters 
                c=(rand()%9)+1;
        }
    build(team2,a);                                                             //Computer team is build, all 3 fightres are added to it
    build(team2+1,b);
    build(team2+2,c);
}

void computerturn(Fighter team1[3],Fighter team2[3],int level){                     //Computer's turn to play
    int player=0,target=0,i;
    srand(time(NULL));
    do{
        player=(rand()%3)+1;                                                        //Computer randomly chooses a player to attack
    }while(player!=1 && player!=2 && player!=3 && team2[player-1].life==0);         //PLayer number has to range form 1 to 3 and its life must be > 0

    if(level==1){                                                                   //If level chosen = 1 : noob 
        do{
            target=(rand()%3)+1;                                                    //Target is chosen randomly
        }while(target!=1 && target!=2 && target!=3 && team1[target-1].life==0);     //Target value has to = 1,2 or 3 and target's life must be > 0 (target alive)
        attack(team2[player-1],team1+(target-1));                                   //Basic attack on target 
        printf("\n  Computer used %s to attack %s \n",team2[player-1].name,team1[target-1].name);
        sleep(2);
    }
   
    if(level==2){                                                                   //If level chosen = 2 : easy
        while(team1[target].life==0){                                               //Target chosen has to be alive (life value > 0)
            target++;
        }
        for(i=0+target;i<3;i++){                                                    //Target chosen has to be the one with the lower life value
            if(team1[i].life<team1[target].life && team1[i].life>0){
                target=i;
            }
        }
        attack(team2[player-1],team1+target);                                       //Basic attck on target
        printf("\n  Computer used %s to attack %s \n",team2[player-1].name,team1[target].name);
        sleep(2);
    }
   
    if(level==3){                                                                   //If level chosen = 3 : average 
        int compt=0;                                                                //If compt = 1 : fighter has attacked , If compt = 0 : fighter has nos attacked yet 
        while(team1[target].life==0){                                               //The target has to be alive (life value > 0)
            target++;
        }
        for(i=0+target;i<3;i++){
            if(team1[i].life<team1[target].life && team1[i].life>0){                //The target is the opponent that has the lowest life value
                target=i;
            }
        }
        if(team2[player-1].comp1.load==0 && compt==0){                              //If load = 0, meaning special attack 1 can be used
            competence(&team2[player-1].comp1,team2,team1,target+1);                //Special attack is used against target 
            compt=1;
            printf("\n  Computer used %s from %s for %s\n",team2[player-1].comp1.name,team2[player-1].name,team2[player-1].comp1.descr);
        }
        if(team2[player-1].comp2.load==0 && compt==0){                              //If load = 0, meaning special attck 2 can be used 
            competence(&team2[player-1].comp2,team2,team1,target+1);                //Special attack is used against target 
            compt=1;
          printf("\n  Computer used %s from %s for %s\n",team2[player-1].comp2.name,team2[player-1].name,team2[player-1].comp2.descr);
        }
        if(team2[player-1].comp3.load==0 && compt==0){                              //Same as before 
            competence(&team2[player-1].comp3,team2,team1,target+1);
            compt=1;
            printf("\n  Computer used %s from %s for %s\n",team2[player-1].comp3.name,team2[player-1].name,team2[player-1].comp3.descr);
        }
        if(compt==0){                                                               //If no special attack can be used
            attack(team2[player-1],team1+target);                                   //Then computer uses a basic attack on target 
            printf("\n  Computer used %s to attack %s\n",team2[player-1].name,team1[target].name);
        }
        sleep(2);
    }
}

void turnplayervsplayer(Fighter team1[3],Fighter team2[3]){                         //Player vs player game 
     
    do{
        printf("\n    > T O U R   J O U E U R   1 <\n");                            //Player 1 turn  
        int player=0,i;
        int choice=0,special=0,target=0;
        do{
            showtab(team1,1);                                                       //Display player 1 team
            showtab(team2,2);                                                       //Display player 2 team
            do{
                printf("\n  >Choose the fighter that will attack : ");
                scanf("%d",&player);                                                //Player chooses the fighter that will attack 
            }while(player!=1 && player!=2 && player!=3 || team1[player-1].life==0); //The "player" value has to range from 1 to 3
            player--;
            showfeatures(team1,player);                                             //Display the special attacks of the fighter 
     
            do{                                                                     //The player chooses between a special and a basic attack 
                printf("\n  >What would you like to do ? \n   1.Use a special attack\n   2.Attack an opponant\n");
                scanf("%d",&choice);
            }while(choice!=1 && choice!=2);
            if(choice==1){                                                          //If choice = 1, special attack
                showfeatures(team1,player);
                do{                                                                 //The player chooses which special attack to use 
                    printf("    Enter the number of the special attack you want to use : ");
                    scanf("%d",&special);
                }while(special!=1 && special!=2 && special!=3);
               
                do{
                    printf("\n    Choose a target : ");                             //The player chooses a target 
                    scanf("%d",&target);
                }while(target!=1 && target!=2 && target!=3 && team2[target-1].life>0);  //The target has to be alive 
           
                if(special==1){                                                     //If the first special attack is chosen 
                    if(team1[player].comp1.load==0){                                //Check if it can be used (load = 0)
                        competence(&team1[player].comp1,team1,team2,target);        //Target is attacked 
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==2){                                                     //Same as above for special attack 2
                    if(team1[player].comp2.load==0){
                        competence(&team1[player].comp2,team1,team2,target);
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==3){                                                     //Same as above for special attack 3
                    if(team1[player].comp3.load==0){
                        competence(&team1[player].comp3,team1,team2,target);
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==0){                                                     //If special = 0, meaning no special attack can be used 
                    printf("\n   I M P O S S I B L E   A T T A C K !\n");
                }
            }
           
                if(choice==2){                                                      //If choice = 2, basic attack 
                do{
                    printf("\n    Choose a target : ");                             //The player choses a target 
                    scanf("%d",&target);
                }while(target!=1 && target!=2 && target!=3);
           
                if(target == 1){
                    if(team2[0].life > 0){                                          //If the target is alive 
                        attack(team1[player],team2);                                //Player attacks target 
                    }
                    else{
                        target=0;
                    }
                }
           
                if(target == 2){
                    if(team2[1].life > 0){                                          //Same here
                        attack(team1[player],team2+1);
                    }
                    else{
                        target=0;
                    }
                }
           
                if(target == 3){                                                    //Sme there
                    if(team2[2].life > 0){
                        attack(team1[player],team2+2);
                    }
                    else{
                        target=0;
                    }
                }
                if(target==0){
                    printf("\n   I M P O S S I B L E   A T T A C K !\n");       //If all opponents are dead, basic attack is impossible
                }    
                }
           
        }while((choice!=1 || (special!=1 && special!=2 && special!=3 )) && ((choice!=2) || (target!=1 && target!=2 && target!=3)));


            if(team2[0].life>0 || team2[1].life>0 || team2[2].life>0){          //Player 2 turn (works the same way as Player 1 turn)
                printf("\n    > T U R N   P L A Y E R   2 <\n");
                player=0;
                choice=0;
                special=0;
                target=0;
            do{
                showtab(team1,1);
                showtab(team2,2);
                do{
                    printf("\n  >Choose the fighter that will attack : ");
                    scanf("%d",&player);
                }while(player!=1 && player!=2 && player!=3 || team2[player-1].life==0);
                player--;
                showfeatures(team2,player);
         
                do{
                    printf("\n  >What would you like to do ? \n   1.Use a special attack\n   2.Attack an opponant\n");
                    scanf("%d",&choice);
                }while(choice!=1 && choice!=2);
                if(choice==1){
                    showfeatures(team2,player);
                    do{
                        printf("    Enter the number of the special attack you want to use : ");
                        scanf("%d",&special);
                    }while(special!=1 && special!=2 && special!=3);
                   
                    do{
                        printf("\n    Choose a target : ");
                        scanf("%d",&target);
                    }while(target!=1 && target!=2 && target!=3 && team1[target-1].life>0);
               
                    if(special==1){
                        if(team2[player].comp1.load==0){
                            competence(&team2[player].comp1,team2,team1,target);
                        }
                        else{
                            special=0;
                            target=0;
                        }
                    }
                    if(special==2){
                        if(team2[player].comp2.load==0){
                            competence(&team2[player].comp2,team2,team1,target);
                        }
                        else{
                            special=0;
                            target=0;
                        }
                    }
                    if(special==3){
                        if(team2[player].comp3.load==0){
                            competence(&team2[player].comp3,team2,team1,target);
                        }
                        else{
                            special=0;
                            target=0;
                        }
                    }
                    if(special==0){
                        printf("\n    A T T A C K    I M P O S S I B L E !\n");
                    }
                    }
               
               
                if(choice==2){
                    do{
                        printf("\n    Choose a target : ");
                        scanf("%d",&target);
                    }while(target!=1 && target!=2 && target!=3);
               
                    if(target == 1){
                        if(team2[0].life > 0){
                            attack(team2[player],team1);
                        }
                        else{
                            target=0;
                        }
                    }
               
                    if(target == 2){
                        if(team1[1].life > 0){
                            attack(team2[player],team1+1);
                        }
                        else{
                            target=0;
                        }
                    }
               
                    if(target == 3){
                        if(team1[2].life > 0){
                            attack(team2[player],team1+2);
                        }
                        else{
                            target=0;
                        }
                    }
                    if(target==0){
                        printf("\n    A T T A C K    I M P O S S I B L E ! \n");
                    }    
                }
               
            }while((choice!=1 || (special!=1 && special!=2 && special!=3 )) && ((choice!=2) || (target!=1 && target!=2 && target!=3)));
           
        Technique *p1=NULL,*p2=NULL,*p3=NULL;
            for(i=0;i<3;i++){                       //Special attacks loading team player 1           
                p1=&team1[i].comp1;
                p2=&team1[i].comp2;
                p3=&team1[i].comp3;
                if(team1[i].comp1.load>0){          //If load > 0
                    p1->load=(p1->load)-1;          //Decreases (meaning will get closer to 0 -> the player will soon be able to use it)
                }
                if(team1[i].comp2.load>0){
                    p2->load=(p2->load)-1;
                }
                if(team1[i].comp3.load>0){
                    p3->load=(p3->load)-1;
                }
            }
               
            for(i=0;i<3;i++){                       //Special attacks loading team player 2 
                p1=&team2[i].comp1;
                p2=&team2[i].comp2;
                p3=&team2[i].comp3;
                if(team2[i].comp1.load>0){
                    p1->load=(p1->load)-1;
                }
                if(team2[i].comp2.load>0){
                    p2->load=(p2->load)-1;
                }
                if(team2[i].comp3.load>0){
                    p3->load=(p3->load)-1;
                }
            }
        }      
    }while((team1[0].life>0 || team1[1].life>0 || team1[2].life>0) && (team2[0].life>0 || team2[1].life>0 || team2[2].life>0));

    if(team1[0].life==0 && team1[1].life==0 && team1[2].life==0){       //If all fighters from team 1 are dead, team 2 wins 
        printf("\n        >>>>>>>>>>>>>>>>>>>>>>>>>>>>>          V  I  C  T  O  R  Y    P  2          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
    else{                                                               //Else, team 1 wins 
        printf("\n        >>>>>>>>>>>>>>>>>>>>>>>>>>>>>          V  I  C  T  O  R  Y     P  1          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
}

void turnplayervscomputer(Fighter team1[3],Fighter team2[3], int level){            //Player vs Computer game 
     
    do{
        int player=0,i;
        int choice=0,special=0,target=0;
        do{
            showtab(team1,1);                                                      //Display player 1 team 
            showtab(team2,2);                                                      //Display computer team 
            do{
                printf("\n  >Choose the fighter that will attack : ");              //Player 1 chooses the fighter that will attack 
                scanf("%d",&player);
            }while(player!=1 && player!=2 && player!=3 || team1[player-1].life==0); //Fighter has to be alive 
            player--;
            showfeatures(team1,player);                                             //Show fighter's special attacks 
     
            do{
                printf("\n  >What would you like to do ? \n   1.Use a special attack\n   2.Attack an opponant\n");
                scanf("%d",&choice);                                                //PLayer 1 chooses between a special and a basic attack 
            }while(choice!=1 && choice!=2);
            if(choice==1){                                                          //If choice = 1, special attack 
                showfeatures(team1,player);
                do{
                    printf("    Enter the number of the special attack you want to use : ");
                    scanf("%d",&special);                                           //Player 1 chooses which special attack 
                }while(special!=1 && special!=2 && special!=3);
               
                do{
                    printf("\n    Choose a target : ");                             //PLayer 1 chooses a target 
                    scanf("%d",&target);
                }while(target!=1 && target!=2 && target!=3 && team2[target-1].life>0);  //Target has to be alive 
           
                if(special==1){                                                     //Special attack number 1 
                    if(team1[player].comp1.load==0){                                //If load = 0, meaning special attack can be used 
                        competence(&team1[player].comp1,team1,team2,target);        //Fighter attacks target 
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==2){                                                     //Same as above for special attack number 2 
                    if(team1[player].comp2.load==0){
                        competence(&team1[player].comp2,team1,team2,target);
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==3){                                                     //Same as above for special attack number 3
                    if(team1[player].comp3.load==0){
                        competence(&team1[player].comp3,team1,team2,target);
                    }
                    else{
                        special=0;
                        target=0;
                    }
                }
                if(special==0){                                                     //If special = 0, no special attack can be used 
                    printf("\n    A T T A C K   I M P O S S I B L E !\n");
                }
            }
           
           
            if(choice==2){                                                      //If choice = 2, basic attack 
                do{
                    printf("\n    Choose a target : ");                             //Player chooses a target 
                    scanf("%d",&target);
                }while(target!=1 && target!=2 && target!=3);                         
           
                if(target == 1){
                    if(team2[0].life > 0){                                         //If target alive             
                        attack(team1[player],team2);                               //Fighter attacks target 
                    }
                    else{
                        target=0;
                    }
                }
           
                if(target == 2){                                                   //Same as above
                    if(team2[1].life > 0){
                        attack(team1[player],team2+1);
                    }
                    else{
                        target=0;
                    }
                }
           
                if(target == 3){                                                    //Same as above 
                    if(team2[2].life > 0){
                        attack(team1[player],team2+2);
                    }
                    else{
                        target=0;
                    }
                }
                if(target==0){                                                      //If no target is alive, basic attack impossible 
                    printf("\n    A T T A C K   I M P O S S I B L E ! \n");
                }    
            }
           
        }while((choice!=1 || (special!=1 && special!=2 && special!=3 )) && ((choice!=2) || (target!=1 && target!=2 && target!=3)));
            
        computerturn(team1,team2,level);
       
        Technique *p1=NULL,*p2=NULL,*p3=NULL;
            for(i=0;i<3;i++){                                                   //Special attacks loading team player 1 
                p1=&team1[i].comp1;
                p2=&team1[i].comp2;
                p3=&team1[i].comp3;
                if(team1[i].comp1.load>0){                                      //If load > 0
                    p1->load=(p1->load)-1;                                      //Decreases (meaning will get closer to 0 -> the player will soon be able to use it)
                }
                if(team1[i].comp2.load>0){
                    p2->load=(p2->load)-1;
                }
                if(team1[i].comp3.load>0){
                    p3->load=(p3->load)-1;
                }
            }
           
        for(i=0;i<3;i++){                                                   //Special attacks loading team computer 
            p1=&team2[i].comp1;
            p2=&team2[i].comp2;
            p3=&team2[i].comp3;
            if(team2[i].comp1.load>0){
                p1->load=(p1->load)-1;
            }
            if(team2[i].comp2.load>0){
                p2->load=(p2->load)-1;
            }
            if(team2[i].comp3.load>0){
                p3->load=(p3->load)-1;
            }
        }
    }while((team1[0].life>0 || team1[1].life>0 || team1[2].life>0) && (team2[0].life>0 || team2[1].life>0 || team2[2].life>0));
    if(team2[0].life==0 && team2[1].life==0 && team2[2].life==0){        //If all fighters from team computer dead, player 1 wins 
        printf("\n        >>>>>>>>>>>>>>>>>>>>>>>>>>>>>          V  I  C  T  O  R  Y          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
    else{                                                               //Else, player 1 loses 
        printf("\n        >>>>>>>>>>>>>>>>>>>>>>>>>>>>>          D  E  F  E  A  T             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    }
}

void menu(Fighter team1[3],Fighter team2[3]){                                       //Guides us throughout the game 
    int choice=0,level=0;
    do{
        printf("\n  >Choose game mode\n   1.    P1 vs P2\n   2.    P1 vs Computer\n");  //Chose game mode, player vs player or player vs computer 
        scanf("%d",&choice);
    }while(choice!=1 && choice!=2);
    printf("\n    >team choice\n");
    showlist();                                                             //Display the list of fighters
    if(choice==1){                                                          //If choice = 1, game mode : player vs player 
        printf("\n    P L A Y E R  1 :\n");
        sleep(1);
        choiceteam(team1);                                                  //Player 1 builds a team
        printf("\n    P L A Y E R   2 :\n");
        sleep(1);
        choiceteam(team2);                                                  //Player 2 builds a team
        turnplayervsplayer(team1,team2);                                    //The game starts between the two players
    }
    if(choice==2){                                                          //If choice = 2, game mode : player vs computer 
        printf("PLAYER 1 :\n");
        sleep(1);
        choiceteam(team1);                                                  //Player 1 builds a team 
        choicecomputer(team2);                                              //Computer builds a team 
        do{                                                                 //Choice of the level of difficulty 
            printf("\n  >Choose a level of difficulty\n   1.    Noob\n   2.    Easy\n   3.    Average\n");
            scanf("%d",&level);
        }while(level!=1 && level!=2 && level!=3);
        turnplayervscomputer(team1,team2,level);                            //The game starts between player 1 and computer 
    }
}

