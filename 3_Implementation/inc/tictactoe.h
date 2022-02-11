#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#ifndef TIC_H_
#define TIC_H_

char x,o;

char u1[50],u2[50];



void board();
void rules();
int checkforwin();
int decision();
int check_draw(int turn);



#endif