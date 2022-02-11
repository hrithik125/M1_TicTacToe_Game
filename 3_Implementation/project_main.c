#include"tictactoe.h"

char ad[9]={'1','2','3','4','5','6','7','8','9'};

int checkforwin()
{
    if(ad[0]==ad[1] && ad[1]==ad[2])
        return 1;
    else if(ad[3]==ad[4] && ad[4]==ad[5])
        return 1;
    else if(ad[6]==ad[7] && ad[7]==ad[8])
        return 1;
    else if(ad[0]==ad[3] && ad[3]==ad[6])
        return 1;
    else if(ad[1]==ad[4] && ad[4]==ad[7])
        return 1;
    else if(ad[2]==ad[5] && ad[5]==ad[8])
        return 1;
    else if(ad[0]==ad[4] && ad[4]==ad[8])
        return 1;
    else if(ad[2]==ad[4] && ad[4]==ad[6])
        return 1;
    else if(ad[0]!='1' && ad[1]!='2' && ad[2]!='3' && ad[3]!='4' && ad[4]!='5' && ad[5]!='6' && ad[6]!='7' && ad[7]!='8' && ad[8]!='9')
        return 0;
    else
        return -1;
}

void board()
{
    int i;

    system("cls");
    printf("\tTic-Tac-Toe\n\n");
        printf("\n\n");
        printf("%s:- (%c)\n%s:-  (%c)\n\n\n",u1,x,u2,o);

        printf("  %c |  %c | %c\n",ad[0],ad[1],ad[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",ad[3],ad[4],ad[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",ad[6],ad[7],ad[8]);
        printf("    |    |    \n");
    }



int main()
{
    FILE *p;
    p=fopen("score.txt","a+");
    fclose(p);
    system("color 0D");
    int player=1;
    int choice,score=-1;
    char symbol,re;
    char start,dec;
    int s;
    rules();
    printf("\n\nType 1 to start the game:-\nType 2 to view leader board:-\nType 3 to EXIT\n");
    scanf("%d",&s);
    if (s==3)
    {
        exit(0);
    }
    else if(s==1)
    {
    read:
        p=fopen("score.txt","a+");
    printf("\nEnter name of player1: ");
    scanf("%s",u1);
    fprintf(p,"\n%s",u1);
    printf("Enter name of player2: ");
    scanf("%s",u2);
    fprintf(p,"\t%s",u2);
    fclose(p);
    if(!strcmp(u1,u2))
    {
        printf("Enter names of different players!\n\n");
        goto read;
    }
    else
        decision();


    system("color 71");
    board();

    do
    {
       // xy:
        player=((player%2)?1:2);
        if(player==1)
        printf("%s Type any digit from 1-9 to fill your response:- ",u1);
        else
            printf("%s Type any digit from 1-9 to fill your response:- ",u2);
        xy:
        scanf("%d",&choice);
        // if(choice != 1 && choice != 2 &&  choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9)
        // {
        //     printf("Enter valid input");
        //     //goto xy;
        // }

        if(choice>0 && choice<10)
        {
        symbol=((player==1)?x:o);
        if(choice==1 && ad[0]=='1')
            ad[0]=symbol;
        else if(choice==2 && ad[1]=='2')
            ad[1]=symbol;
        else if(choice==3 && ad[2]=='3')
            ad[2]=symbol;
        else if(choice==4 && ad[3]=='4')
            ad[3]=symbol;
        else if(choice==5 && ad[4]=='5')
            ad[4]=symbol;
        else if(choice==6 && ad[5]=='6')
            ad[5]=symbol;
        else if(choice==7 && ad[6]=='7')
            ad[6]=symbol;
        else if(choice==8 && ad[7]=='8')
            ad[7]=symbol;
        else if(choice==9 && ad[8]=='9')
            ad[8]=symbol;
        // else if(choice>='a' && choice<='z' || choice>='A' && choice<='Z' )
        //       printf("Enter valid input\n");  

        else{
            printf("Wrong Selection\n");player--;
            goto xy;
        }
        score=checkforwin();
        player++;
        board();
        }
        else{
            printf("Enter valid input\n");
            choice = 0;
        }
    }while(score == -1);


    p=fopen("score.txt","a+");
    if(score==1)
    {

        if(player==2)
        {printf("\n\nPlayer1 %s Wins!\n\n",u1);fprintf(p,"\t%s",u1);
        getchar();}
        else
            {printf("\n\nPlayer2 %s Wins!\n\n",u2);fprintf(p,"\t%s",u2);
        getchar();
            }
        fclose(p);
    }
    else
        printf("\n\nGame Draws!\n\n");fprintf(p,"\t%s","DRAW");
        getchar();
    }
    else if(s==2)
    {
        int cho;
        system("cls");
        printf("\n\n");
        printf("\tLEADERBOARD\n\n");
        printf("P1\tP2   Result\n");
        char c;
        p=fopen("score.txt","r");
        while((c=getc(p))!=EOF)
        {
            printf("%c",c);
        }
        fclose(p);
        printf("\n\nPress 1 to start the game:- ");
        scanf("%d",&cho);
        if(cho==1)
            goto read;
        else
            getchar();
    }
    else
    {
        printf("\n\nType 1 to play the game!\n\n");
        getchar();
    }
}