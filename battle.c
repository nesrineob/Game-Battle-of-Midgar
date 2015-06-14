#include <unistd.h>
#include <stdlib.h>
#include "header.h"
#include <stdio.h>

void battle(s_player *player1, s_monster *monster1){
  char *entree_clavier;

  while (1){
    if (player1->pv <= 0){
      my_putstr("\nYou Are a looser\n");
      return;
    }
    else if (monster1->pv <= 0){
      my_putstr("\nYou Are a great Winner\n");
      return;
    }
    my_putstr("\nplayer : => ");
    entree_clavier = readLine();

    if ((my_strcmp(entree_clavier,"help") == 0))  	
      aff_help();
    else if ((my_strcmp(entree_clavier,"stat") == 0)) 
      stat(player1);     
    else if ((my_strcmp(entree_clavier,"libra") == 0))  	
      libra(player1, monster1);
    else if ((my_strcmp(entree_clavier,"attack") == 0)){ 
      attack(player1, monster1);
      rand_attack(player1, monster1);      
    }
    else if ((my_strcmp(entree_clavier,"fire") == 0)){ 
      fire(player1, monster1);
      rand_attack(player1, monster1);
    }
    else if ((my_strcmp(entree_clavier,"slash") == 0)){ 
      slash(player1, monster1);
      rand_attack(player1, monster1);
    }
    else if ((my_strcmp(entree_clavier,"thunder") == 0)){ 
      thunder(player1, monster1);
      rand_attack(player1, monster1);
    }
    else if ((my_strcmp(entree_clavier,"quit") == 0))  	
      return;
    else
      my_putstr("\nkeyboard entry wrong tap help\n");
  }
}
