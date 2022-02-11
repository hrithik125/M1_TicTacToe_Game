#include"tictactoe.h"

// char ad[9]={'1','2','3','4','5','6','7','8','9'};


void rules()
{
    char link='n';
    printf("\tTic-Tac-Toe\n\n");
    //printf("Welcome to the most played 2D game and a sort of fun using X and O\n\n");
    printf("Rules:-\n");
    printf("\n1:Each player will be entering the number to put respective X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be declared as the winner");
    printf("\n\nEnjoy the game! Be a Winner!\n\n");
    // printf("To know more about the game press Y else type any other character:- ");
    // scanf("%c",&link);
    if(link=='y' || link=='Y')
    {
        system("start http://www.wikihow.com/Play-Tic-Tac-Toe");
    }

}
int decision()
{
    char dec;
        deci:
        printf("\n\nPlayer1 %s choose the X or 0:",u1);
        dec=getchar();
        scanf("%c",&dec);
        {
            if(dec=='X' || dec=='x')
            {
                x='X';
                o='0';
            }
            else if(dec=='0' || dec=='O' || dec=='o')
            {
                x='0';
                o='X';
            }
            else
            {
                printf("Please enter either X or O only \n\n");
                goto deci;
            }
        }
}
