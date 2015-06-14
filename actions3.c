#include <stdio.h>
#include "header.h"

void stat(s_player *player1){
  my_putstr("\n");
  my_putstr(player1->name);
  my_putstr(" pv :");
  my_put_nbr(player1->pv);
  my_putstr("\n");
  my_putstr(player1->name);
  my_putstr(" pm :");
  my_put_nbr(player1->pm);
  my_putstr("\n");
}

void libra(s_player *player1, s_monster *monster1){
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" pv :");
  my_put_nbr(monster1->pv);
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" pm :");
  my_put_nbr(monster1->pm);
  my_putstr("\n");
  player1->pm = player1->pm - 1;
}
