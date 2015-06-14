
#ifndef __HEADER_H__
# define __HEADER_H__
# define PV_MAX 100
# define PM_MAX 30

typedef struct s_monster{
	char name[20];
	int pv;
	int pm;
}s_monster;

typedef struct s_player{
	char name[20];
	int pv;
	int pm;
}s_player;
        
char *readLine();
void my_putchar(char c);
void my_putstr(char *str);
void clearTerminal();
int my_strcmp(char *s1, char *s2);
void battle();
void aff_help();
char *my_strcpy(char *dest, char *src);
void battle(s_player *player1, s_monster *monster1);
void libra(s_player *player1, s_monster *monster1);
void stat(s_player *player1);
void attack(s_player *player1, s_monster *monster1);
void slash(s_player *player1, s_monster *monster1);
void fire(s_player *player1, s_monster *monster1);
void thunder(s_player *player1, s_monster *monster1);
void rand_attack(s_player *player1, s_monster *monster1);
void bite(s_player *player1, s_monster *monster1);
void earthquake(s_player *player1, s_monster *monster1);
void doom(s_player *player1, s_monster *monster1);
void my_put_nbr(int nb);



#endif
