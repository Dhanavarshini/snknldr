#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>



int dice;
int checkPosition();
int Position, newPosition, above;
int choice;




int main()
{      int i,n,player;
      srand(time(NULL));
      printf("choose number of players\n");
      scanf("%d",&n);

      printf("press 1 to start the game");
      scanf("%d",&choice);


       if (choice==1)
       {


      printf("\nWelcome to Snakes and Ladders.\n");
      printf("\n64  63  62  61  60  59  58  57         1=Start           27=Ladder to 37\n");
      printf("49  50  51  52  53  54  55  56         4=Ladder to 35    34=Snake  to 20\n");
      printf("48  47  46  45  44  43  42  41         7=Ladder to 23    42=Snake  to 11\n");
      printf("33  34  35  36  37  38  39  40         9=Snake  to 5     46=Ladder to 53\n");
      printf("32  31  30  29  28  27  26  25        14=Ladder to 43    49=Snake  to 32\n");
      printf("17  18  19  20  21  22  23  24        17=Snake  to 13    63=Snake  to 2\n");
      printf("16  15  14  13  12  11  10   9        21=Snake  to 3     64=End\n");
      printf(" 1   2   3   4   5   6   7   8        24=Ladder to 58\n");                       /*Prints the board for user's reference*/






newroll:for(i=0;i<n;i++)
{     printf("player %d turn to play",i+1);
      printf("\n\nPlease press enter to roll\n\n");
      dice = toupper( getche() );
      dice=((rand()%6)+1);
      printf("\nYou have rolled a %d.\n", dice);


      Position+=dice;

      if(Position >64)
           {above = (Position-64);
           Position = (64 - above);}



      printf("\nYou have landed on space %d.\n", Position);



      checkPosition();

      if (Position<newPosition)
         {printf("\nWell done, you have landed on a ladder. You are now on space %d.\n", newPosition);}

      if (Position>newPosition)
         {printf("\nUnlucky, you have landed on a snake. You are now on space %d.\n", newPosition);}

      Position = newPosition;
      player=i;

}
     if(newPosition==64)
     printf("Congratulations, player %d have won!!!",player);
     else
     goto newroll;
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
