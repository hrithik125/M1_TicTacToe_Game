#include"tictactoe.h"

void rules()
{
    
    printf("\tTic-Tac-Toe\n\n");
    
    printf("Rules:-\n");
    printf("\n1:Player can enter the number 1-9 to put respective X or O");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be the winner");
    printf("\n\nHope you'll enjoy the game\n\n");

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





int draw(int num)
{
    if(num > 9)
    {
        printf("\n\n Game is Draw");
        getchar();
        exit(0);
    }
    return 1;
}
