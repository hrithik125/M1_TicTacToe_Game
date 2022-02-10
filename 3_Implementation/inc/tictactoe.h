#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#ifndef TIC_H_
#define TIC_H_

char x,o;
char a[9]={'1','2','3','4','5','6','7','8','9'};
char u1[50],u2[50];



void board();
void rules();
int checkforwin();
int decision();




#endif
