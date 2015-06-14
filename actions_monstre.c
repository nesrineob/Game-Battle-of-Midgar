#include <stdio.h>
#include "header.h"
#include <time.h>
#include <stdlib.h>

void rand_attack(s_player *player1, s_monster *monster1){
  int alea;

  alea = (rand()% 3) + 1;
  if(alea == 1)
    bite(player1, monster1);
  if(alea == 2)
    earthquake(player1, monster1);
  if(alea == 3)
    doom(player1, monster1);
}

void bite(s_player *player1, s_monster *monster1){
  my_putstr("\nmonster use => bite : \n");
  player1->pv = player1->pv - 6;
  my_putstr("\n");
  my_putstr(player1->name);
  my_putstr(" loose 6 pv\n");
  my_putstr(monster1->name);
  my_putstr(" loose 0 pv\n");
}

void earthquake(s_player *player1, s_monster *monster1){
  my_putstr("\nmonster use => earthquake \n");
  monster1->pv = monster1->pv - 3;
  player1->pv = player1->pv - 15;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 3 pv\n");
  my_putstr(player1->name);
  my_putstr(" loose 15 pv\n");
}

void doom(s_player *player1, s_monster *monster1){
  my_putstr("\nmonster use => doom \n");
  player1->pv = player1->pv - 11;
  monster1->pm = monster1->pm - 5;
  my_putstr("\n");
  my_putstr(monster1->name);
  my_putstr(" loose 5 pm\n");
  my_putstr(player1->name);
  my_putstr(" loose 11 pv\n");
}
