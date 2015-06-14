#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "header.h"

char *readLine() {
  ssize_t ret;
  char *buff;

  if ((buff =malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1){
    buff[ret - 1] = '\0';
    return (buff);
  }
  buff[0] = '\0';
  return (buff);
}

void my_putchar(char c){
  write(1, &c, 1);
}

void clearTerminal(){
  const char* CLEAR_SCREE_ANSI;

  CLEAR_SCREE_ANSI = "\033[2J\033[1;5H";
  write(STDOUT_FILENO,CLEAR_SCREE_ANSI,12);
}
