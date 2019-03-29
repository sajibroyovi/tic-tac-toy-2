#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
char arr[9]={'1','2','3','4','5','6','7','8','9'};
void swap(int);
char s='X',s1='0';
int pl,p;
void display()
{
    printf("\t\t\t\tXOXO game....\n\n");
    printf("\t\t\t ______________\n");
    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t|  %c |  %c | %c  |\n",arr[0],arr[1],arr[2]);
    printf("\t\t\t|____|____|____|\n");
    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t|  %c |  %c | %c  |\n",arr[3],arr[4],arr[5]);
    printf("\t\t\t|____|____|____|\n");
    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t| %c  |  %c | %c  |\n",arr[6],arr[7],arr[8]);
    printf("\t\t\t|____|____|____|\n");
}
void player()
{
     printf("\n\n\n\t\t\tSymbol for First player 'X',Symbol for Second player '0'\n");
     printf("\n\t\t\tWho will star the game..\n");
     printf("\n\t\t\tFor First player press 1,For second player press 2\n\t\t\t");
}
void start()
{
    scanf("\t\t\t%d",&pl);
    if(pl>2)
        {
        printf("\n\t\t\tWrong selection....");
          printf("\n\t\t\tPlZ try again....\n\t\t\t");
        start();
        }
}
int count=0;
void play()
{
    count++;
    if(pl%2!=0)
    {
    printf("\n\t\t\tFirst player's move..");
    printf("\n\t\t\tEnter the position no:\n\t\t\t");
    scanf("%d",&p);
    swap(p);
    }
    else if(pl%2==0)
    {
    printf("\n\t\t\tSecond player's move..");
    printf("\n\t\t\tEnter the position no:\n\t\t\t");
    scanf("%d",&p);
    swap(p);
    }
}
void swap(int p)
{
    for(int i=0;i<=8;i++)
    {
        if(pl%2!=0)
        {
            if(p==1)
            {
                arr[0]=s;
            }
            else if(p==2)
            {
                arr[1]=s;
            }
            else if(p==3)
            {
                arr[2]=s;
            }
            else if(p==4)
            {
                arr[3]=s;
            }
            else if(p==5)
            {
                arr[4]=s;
            }
            else if(p==6)
            {
                arr[5]=s;
            }
            else if(p==7)
            {
                arr[6]=s;
            }
            else if(p==8)
            {
                arr[7]=s;
            }
            else if(p==9)
            {
                arr[8]=s;
            }
            else
            {
                printf("\n\t\t\tWrong position....");
                printf("\n\t\t\tPLZ try again.....");
                scanf("%d",&p);
            }
            pl++;
        }
        else if(pl%2==0)
        {

           if(p==1)
            {
                arr[0]=s1;
            }
            else if(p==2)
            {
                arr[1]=s1;
            }
            else if(p==3)
            {
                arr[2]=s1;
            }
            else if(p==4)
            {
                arr[3]=s1;
            }
            else if(p==5)
            {
                arr[4]=s1;
            }
            else if(p==6)
            {
                arr[5]=s1;
            }
            else if(p==7)
            {
                arr[6]=s1;
            }
            else if(p==8)
            {
                arr[7]=s1;
            }
            else if(p==9)
            {
                arr[8]=s1;
            }
             else
            {
                printf("\n\t\t\tWrong position....");
                printf("\n\t\t\tPLZ try again.....");
                scanf("%d",&p);
            }
            pl++;
        }
    }

}
int end()
{
    if((arr[0]=='X'&&arr[1]=='X'&&arr[2]=='X')||(arr[0]=='X'&&arr[3]=='X'&&arr[6]=='X')||(arr[0]=='X'&&arr[4]=='X'&&arr[8]=='X'))
        return 1;
    else if((arr[0]=='0'&&arr[1]=='0'&&arr[2]=='0')||(arr[0]=='0'&&arr[3]=='0'&&arr[6]=='0')||(arr[0]=='0'&&arr[4]=='0'&&arr[8]=='0'))
        return 2;
    else if(arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')
        return 1;
    else if(arr[1]=='0'&&arr[4]=='0'&&arr[7]=='0')
        return 2;
    else if((arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')||(arr[2]=='X'&&arr[4]=='X'&&arr[6]=='X'))
       return 1;
    else if((arr[2]=='0'&&arr[5]=='0'&&arr[8]=='0')||(arr[2]=='0'&&arr[4]=='0'&&arr[6]=='0'))
        return 2;
    else if(arr[3]=='X'&&arr[4]=='X'&&arr[5]=='X')
        return 1;
    else if(arr[3]=='0'&&arr[4]=='0'&&arr[5]=='0')
        return 2;
    else if(arr[6]=='X'&&arr[7]=='X'&&arr[8]=='X')
        return 1;
    else if(arr[6]=='0'&&arr[7]=='0'&&arr[8]=='0')
        return 2;
    else
        return 3;

}


int main()
{
    int t;
    char c;
    system("color 9E");
    PlaySound(TEXT("background"),NULL, SND_LOOP | SND_ASYNC);
    label2:
    system("cls");
    display();
    player();
    start();
    play();
    lebel:
    system("cls");
    display();
    play();
    t=end();
    system("CLS");
    display();
    if(count<9)
    {
    if(t==1)
    {
        printf("\nPlayer 1 win the game....");
        count=0;
    }
    else if(t==2)
    {
        printf("\nPlayer 2 win the game...");
        count=0;
    }
    else
        goto lebel;
    }
    else
    {
        printf("\nGame is draw.....");
        printf("\nGAME OVER...");
        count=0;
    }
lebel3:
    printf("\nDo you want to play again...");
    printf("\nIf yes press y, if no press n:");
    count=0;
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
        arr[0]='1';
        arr[1]='2';
        arr[2]='3';
        arr[3]='4';
        arr[4]='5';
        arr[5]='6';
        arr[6]='7';
        arr[7]='8';
        arr[8]='9';
        goto label2;
    }
    else if(c=='n'||c=='N')
        exit(0);
    else
        {
        printf("\nWrong selection");
        goto lebel3;
        }
getch();
}
