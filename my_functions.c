#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "header.h"

void my_putstr(char *str){
  int i = 0;
  
  while (*(str + i) != '\0'){
    my_putchar ( *(str + i) );
    i++;
  }
}

int my_strcmp(char *s1, char *s2){
  
  while (*s1 != '\0') {
    if (*s2 == '\0') 
      return  (1);
    if (*s2 > *s1)   
      return (-1);
    if (*s1 > *s2)   
      return  (1);
    s1++;
    s2++;
  }
  if (*s2 != '\0') 
    return (-1);
  return (0);
}

char *my_strcpy(char *dest, char *src){
  char *chaine = dest;
  
  while ((*dest = *src)){
    dest++;
    src++;
  }
  return (chaine);
}

void my_put_nbr(int nb){
  if (nb == -2147483648){
    my_putstr("-2147483648");
    return;
  }
  if (nb < 0){
    nb = nb * -1;
    my_putchar('-');
  }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
