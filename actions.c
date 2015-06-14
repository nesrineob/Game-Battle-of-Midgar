#include <stdio.h>
#include "header.h"

void attack(s_player *player1, s_monster *monster1){
  monster1->pv = monster1->pv - 7;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 7 pv\n");
  my_putstr(player1->name);
  my_putstr(" loose 0 pv\n");
}

void slash(s_player *player1, s_monster *monster1){
  monster1->pv = monster1->pv - 10;
  player1->pv = player1->pv - 2;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 10 pv\n");
  my_putstr(player1->name);
  my_putstr(" loose 2 pv\n");
}

void fire(s_player *player1, s_monster *monster1){
  monster1->pv = monster1->pv - 10;
  player1->pm = player1->pm - 3;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 10 pv\n");
  my_putstr(player1->name);
  my_putstr(" loose 3 pm\n");
}

void thunder(s_player *player1, s_monster *monster1){
  monster1->pv = monster1->pv - 15;
  player1->pm = player1->pm - 5;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 15 pv\n");
  my_putstr(player1->name);
  my_putstr(" loose 5 pv\n");
}
