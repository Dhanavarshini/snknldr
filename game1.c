#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "supp.h"
#include<time.h>
#include<strings.h>
#include<conio.h>
#include <windows.h>
#include<dos.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGNETA "\x1b[35m"
#define clrscr();system("cls")
int Nplace;
int Position;


int check(int Position)
{

                                              /*for movements in snake and ladder*/
switch(Position)
{
    case 98:
                return Nplace=40;
                break;
    case 84:
                return Nplace=58;
                break;
    case 87:
                return Nplace=49;
                break;
    case 73:
                return Nplace=15;
                break;
    case 50:
                return Nplace=5;
                break;
    case 43:
                return Nplace=17;
                break;
    case 56:
                return Nplace=8;
                break;


    /*  completion of snakes and now we start ladder */
      case 71:
                return Nplace=92;
                break;

      case 57:
                return Nplace=96;
                break;

      case 26:
                return Nplace=59;
                break;

      case 6:
                return Nplace=45;
                break;

      case  52:
                return Nplace=72;
                break;

     default:
                return Nplace=Position;
}
}
int loadx()
{
  printf(ANSI_COLOR_BLUE"\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("                                   Please wait the game is loading up!");
  Beep(500,100);
  Sleep(500);
  printf(".");

  Sleep(500);
  Beep(500,100);
  printf(".");
  Sleep(500);
  Beep(500,100);
  printf(".");
  Sleep(500);
  Beep(500,100);
  printf("."ANSI_COLOR_RESET);
  Sleep(500);
  MessageBeep(MB_OK);
  return 0;

}


      /*dice tossing*/

int roll(int m)
{  int dice;

  clrscr();
  pr();


      printf("\n\nPlayer %d turn to play", m + 1);
        printf("\nPlease press enter to roll\n");

  dice = toupper(getche());
 dice =((rand()%6)+1);
  printf("you have rolled %d!\n",dice);
Sleep(1000);
  return dice;

}


/*mroll that is for single player*/
int mroll(int m)
{  int dice;


  clrscr();
  pr();



        while(m==1)
        {
          printf(ANSI_COLOR_YELLOW"its computers turn be patient\n"ANSI_COLOR_RESET);
          printf(ANSI_COLOR_GREEN"Processing please wait ");
          Sleep(300);

          Sleep(500);
          printf(".");

          Sleep(50);

          printf(".");
          Sleep(50);

          printf(".");
          Sleep(50);

          printf("."ANSI_COLOR_RESET);
          Beep(500,100);
          goto labelcomp;
        }
        printf("\n\nits Players turn to play\n", m + 1);
        Sleep(1000);

        printf(ANSI_COLOR_RED"\nPlease press enter to roll\n"ANSI_COLOR_RESET);
        Sleep(1000);

  dice = toupper(getche());
 labelcomp:dice =((rand()%6)+1);
  printf(ANSI_COLOR_MAGNETA"you have rolled %d!\n",dice);
Sleep(1000);
  return dice;
}



                                                    /*welcome note*/


int welcome()
{
   int i;
labelg: clrscr();
  printf("---------------------------------------------------------------------------------------------------------------------\n");
   printf("---------------------------------------------------------------------------------------------------------------------\n");
   system("COLOR 02");
   printf( "                                                        SNAKE AND LADDER                                                     \n" );
   printf(ANSI_COLOR_RED"                                              \t\t              _the game of indian tradition                  \n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"------------------------------------------------------------------------------------------------------\n");
  printf("------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n"ANSI_COLOR_RESET);


   printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"                                   |      1      |      START                 |\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"                                   |      2      |      INFO                  |\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n\n"ANSI_COLOR_RESET);
label1:printf(ANSI_COLOR_GREEN"                                        Please enter your input.....: "ANSI_COLOR_RESET);

scanf("%d",&i);
Sleep(100);
clrscr();
loadx();

if(i==1)
   {
     return 0;
   }
   else if(i==2)
   {    int g;
    labeltry: clrscr();
           printf("\n\n\n");
           printf("                                    Here's a Snakes and ladders board game to play with your friends and family.\n\n\n\n\n\n\n");
           printf("You need to print the board game, and you can print counters and dice for the game too.\n\n");
           printf("How to play:");
           printf("Each player puts their counter on the space that says 'start here'.\n\n");
           printf("Take it in turns to roll the dice. Move your counter forward the number of spaces shown on the dice.\n\n");
           printf("If your counter lands at the bottom of a ladder, you can move up to the top of the ladder.\n\n");
           printf("If your counter lands on the head of a snake, you must slide down to the bottom of the snake.\n\n");
           printf("The first player to get to the space that says '100' is the winner.\n\n\n\n");
           printf("Have fun \n");

          printf("press 1 to return: ");
          scanf("%d",&g);
          if(g==1)
          {
            goto labelg;
          }
          else
          {
            printf("Oops seems to be invalid input Please try again");
            Sleep(1000);

            goto labeltry;
          }
   }
   else
   {

     printf("\n\n\n\n");
     MessageBeep(MB_OK);
     printf(ANSI_COLOR_RED"                                     please enter the correct input\n");
     printf("                                seems you have entered invalid value"ANSI_COLOR_RESET);
     Sleep(1000);
     goto labelg;
   }
}                                                /*end of welcome display*/




                                         /*collecting names for multiplayer*/



int collect()
{

        char names[10][10];
        char nameq[10];
         int i,n;
    label3:clrscr();
           printf(ANSI_COLOR_BLUE"Enter the number of players with in 5 : "ANSI_COLOR_RESET);
           scanf("%d",&n);

           Sleep(1000);
  if(n!=1)
  {

         if(n<6)
     {
         for(i=1;i<n+1;i++)
         {
           printf(ANSI_COLOR_GREEN"Enter player %d name : "ANSI_COLOR_RESET,i);
           {
             scanf("%s",&names[i]);
           }
         }
         Sleep(100);

         printf(ANSI_COLOR_GREEN"Welcome to the game snakes and ladder\n");
         for(i=1;i<n+1;i++)
         {
           printf("%s\n",names[i]);
           Sleep(1000);

         }

       }
          else
    {
       MessageBeep(MB_OK);
       printf(ANSI_COLOR_BLUE"try it again "ANSI_COLOR_RESET);
       goto label3;
     }
     return n;
  }
  /*loop for single player entering to multiplayer*/
  else
  {
         int i=0;
    labelb: clrscr();
    printf(ANSI_COLOR_RED"Oops Looks like you are alone and you cant play Multiplayer game alone\n "ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN"you are being redirected to the single player environment\n "ANSI_COLOR_RESET);

    while(i!=3)
    {
      Sleep(1000);
       printf(ANSI_COLOR_MAGNETA"Please wait"ANSI_COLOR_RESET);
      Sleep(1000);
      i++;
      goto labelb;
    }
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\n" );
    printf("                                         Please enter your name: ");
    scanf("%s",&nameq);

    loadx();
    return n;
}



}








                                           /*player tupe that is single or multiplayer*/
int playerType()
{ int i;
label2:  clrscr();
    printf("\n\n\n\n\n\n\n\n\n\n\n");
  printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n"ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN"                                   |      1      |      PLAY WITH COMPUTER     |\n"ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n"ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN"                                   |      2      |      MULTI player           |\n"ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN"                                   --------------------------------------------\n\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN"                                        Please enter your input.....: "ANSI_COLOR_RESET);

  scanf("%d",&i);
  Sleep(100);
clrscr();
loadx();
clrscr();
  if(i==1)/*single player*/
  {
     char name[20];
     printf("\n\n\n\n\n\n\n\n\n\n\n");
     printf(ANSI_COLOR_GREEN"                                        Please enter your name: ");

     scanf("%s",&name);
     Sleep(100);
     printf("         \t\t          Welcome to the game snakes and ladder\n                             %s!",name);
     Sleep(1000);
     MessageBeep(MB_OK);
    return 1;
  }
  else if(i==2)/*multi player*/
  {  collect();
  }
  else
  {
    printf("please enter the correct input: \n"ANSI_COLOR_RESET);
  Sleep(100);
  goto label2;
  }

}

/*proto displayer*/
int displayHonour(int i,int P)

{ clrscr();
   pr();

  if(P!=1)
  {
     printf("Congratulations player %d you made it out of %d\n",i,P);
     printf("winner! Winner! Snake and Chicken dinner!");
   }
   else
   {   if(i!=1)
     {
     printf("Congratulations player you made it out you have won over computer\n");
     printf("winner! Winner! Snake and Chicken dinner!");
     }
     else
     {
       printf("Oops the System has Won over you and Try again unless you suceed Thank You!");
     }
   }
MessageBeep(MB_OK);

}





                                      /*main function*/


int main()
{
           srand(time(NULL));
   int P,i;  /*for collecting players count*/
   int dice;/*IN for checking key is pressed or not~~ dice is to take dice count*/
   int position[100]={0,0};
   int choice=1;
   int above,player;
   char name[10];
   int A;
   /*for use of the temperory manuplation*/
 welcome();
  Sleep(100);
  P=playerType();
  {
    if(P==1)
    {   A=P;
      /*adding computer*/
      printf(ANSI_COLOR_GREEN"you are playing with computer\n");
      printf("Please Wait, The game is loading\n");
      Sleep(500);
      Beep(300,50);
      printf(".");
      Sleep(500);
      Beep(300,50);
      printf(".");
      Sleep(500);
      Beep(300,50);
      printf(".");
      Sleep(500);
      Beep(300,50);
      printf(".");
      Beep(300,50);
      Sleep(500);
      MessageBeep(MB_OK);
      Sleep(3000);
      P=2;

    }

  }
  while(choice==1)
  {


  if(Position != 100)
  {
    for (i = 0; i < P; i++)
    {
       if(A!=1)
       {
       dice=roll(i);
       }
       else
       {
         dice=mroll(i);


       }   /*rolling the dice*/
       position[i] = position[i] + dice;

           if (position[i] > 100)
                    {
                         above = (position[i] - 100);
                         position[i] = (100 - above);
                      }

        printf(ANSI_COLOR_GREEN"Hey! you are in: %d\n"ANSI_COLOR_RESET, position[i]);
        Sleep(1000);
        check(position[i]);

        if(position[i]<Nplace)

          {
            MessageBeep(MB_OK);
          printf(ANSI_COLOR_YELLOW"Great!, you got lucky its on ladder .\n You are being redirected to:%d "ANSI_COLOR_RESET,Nplace);
          Sleep(1000);
          }

        if(position[i]>Nplace)
         {
           Beep(100,100);
          printf(ANSI_COLOR_RED"Oops.., you have landed on a snake.\n you are being redirected to:%d"ANSI_COLOR_RESET,Nplace);
          Sleep(1000);
         }


        position[i] = Nplace;
        player=i+1;
        if (position[i]==100)
        {
          Position = position[i];
          displayHonour(i,P);
          exit(0);
        }
    }
  }
}

    getch();
    return 0;
}
