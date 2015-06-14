#include <unistd.h>
#include <stdlib.h>
#include "header.h"
#include <stdio.h>

void aff_help(){
  my_putstr("*** attack \n");
  my_putstr("*** slash \n");
  my_putstr("*** fire \n");
  my_putstr("*** thunder \n");
  my_putstr("*** stat \n");
  my_putstr("*** libra \n");
  my_putstr("*** help \n");
  my_putstr("*** quit \n");
}

void init(s_player *player1, s_monster *monster1){
  player1->pv = 100;
  player1->pm = 30;
  my_strcpy (monster1->name, "Monster");
  monster1->pv = 75;
  monster1->pm = 20;
}

int main(int argc, char *argv[]){
  if (argc > 2){
    s_player player1;
    s_monster monster1;
  
    init (&player1, &monster1);
    if ((my_strcmp(argv[1], "-n") == 0)){
      clearTerminal();
      my_putstr("\033[31;10m ###### BATTLE OF MIDGAR ##########\033[0m\n\n");
      my_strcpy(player1.name, argv[2]);
      aff_help();
      battle(&player1,&monster1);
    }
    else
      my_putstr("USAGE: -n <Add player name>\n");
    return (0);
  }
  else
    my_putstr("USAGE: -n <Add player name>\n");	
  return (0);
}
