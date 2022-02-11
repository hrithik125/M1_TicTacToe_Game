#include"tictactoe.h"

void rules()
{
    
    printf("\tTic-Tac-Toe\n\n");
    
    printf("Rules:-\n");
    printf("\n1:Each player will be entering the number to put respective X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be declared as the winner");
    printf("\n\nEnjoy the game! Be a Winner!\n\n");

    char link='n';
    if(link=='y' || link=='Y')
    {
        system("start http://www.wikihow.com/Play-Tic-Tac-Toe");
    }

}
int decision()
{
    char dec;
        deci:
        printf("\n\nPlayer1 %s choose the X or O:",u1);
        dec=getchar();
        scanf("%c",&dec);
        {
            if(dec=='X' || dec=='x')
            {
                x='X';
                //o='0';
                o='O';
            }
            else if(dec=='0' || dec=='O' || dec=='o')
            {
                //x='0';
                x='O';
                o='X';
            }
            else
            {
                printf("Please enter either X or O only \n\n");
                goto deci;
            }
        }
}





int check_draw(int turn)
{
    if(turn > 9)
    {
        //gotoxy(30,20);
        //textcolor(128+RED);
        printf("\n\n Game Draw");
        getchar();
        exit(0);
    }
    return 1;
}