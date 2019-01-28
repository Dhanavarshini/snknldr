#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include "board.h"

int dice;
int checkPosition();
int Position, newPosition, above;
int choice;




int main()
{      int i,n,player;
      srand(time(NULL));//to roll dice
      printf("choose number of players\n");
      scanf("%d",&n);
      int IN,c=0;

      printf("press 1 to start the game");
      scanf("%d",&choice);


       if (choice==1)
       {
          pr();
         while(Position!=64)
           {
            newroll:for(i=0;i<n;i++)
             {
               printf("player %d turn to play",i+1);
               printf("\n\nPlease press enter to roll\n\n");

      dice = toupper( getche() );
      dice=((rand()%6)+1);
      printf("\nYou have rolled a %d.\n", dice);


      Position+=dice;

      if(Position >64)
           {
             above = (Position-64);
           Position = (64 - above);

            }



           printf("\nYou are on position: %d.\n", Position);



      checkPosition();

      if (Position<newPosition)
         {printf("\nWell done, you have landed on a ladder. You are now on space %d.\n", newPosition);}

      if (Position>newPosition)
         {printf("\nUnlucky, you have landed on a snake. You are now on space %d.\n", newPosition);}

      Position = newPosition;
         player=i+1;

}


}
     if(Position==64)
     printf("Congratulations, player %d have won!!!",player);





}

getch();
return 0;
}


checkPosition()
{
     switch(Position)
{
         case 4:
              return newPosition = 35;
              break;

         case 7:
              return newPosition = 23;
              break;

         case 9:
              return newPosition =5;
              break;

         case 14:
              return newPosition =43;
              break;

         case 17:
              return newPosition =13;
              break;

         case 21:
              return newPosition =3;
              break;

         case 24:
              return newPosition =58;
              break;

         case 27:
              return newPosition =37;
              break;

         case 34:
              return newPosition =20;
              break;

         case 42:
              return newPosition =11;
              break;

         case 46:
              return newPosition =53;
              break;

         case 49:
              return newPosition =32;
              break;

         case 63:
              return newPosition =2;
              break;

         default:
                return newPosition = Position;
                 }


}
