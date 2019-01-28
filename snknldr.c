#include "board.h"
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int dice;
int checkPosition();
int Position, newPosition, above;

int main() {
  int i, n, player, choice = 0;
  int position[100] = {0};
  srand(time(NULL)); // to roll dice
  printf("Choose number of Players : ");
  scanf("%d", &n);
  printf("Please Wait, The game is loading");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  choice = 1;
  if (choice == 1) {
    pr();
    while (Position != 100) {
    newroll:
      for (i = 0; i < n; i++) {
        printf("\n\nPlayer %d turn to play", i + 1);
        printf("\nPlease press enter to roll\n");

        dice = toupper(getche());
        dice = ((rand() % 6) + 1);
        printf("\nYou have rolled a %d\n", dice);

        position[i] = position[i] + dice;

        if (position[i] > 100) {
          above = (position[i] - 100);
          position[i] = (100 - above);
        }

        printf("You are on position: %d\n", position[i]);

        checkPosition(position[i]);

        if (position[i] < newPosition) {
          printf("Well done, you have landed on a ladder. You are now on "
                 "space %d\n",
                 newPosition);
        }

        if (position[i] > newPosition) {
          printf("Unlucky, you have landed on a snake. You are now on space "
                 "%d\n",
                 newPosition);
        }

        position[i] = newPosition;
        player = i + 1;
        if (position[i] == 100) {
          printf("Congratulations, player %d has won!!!", player);
          Position = position[i];
          exit(0);
        }
      }
    }
  }
  getch();
  return 0;
}

int checkPosition(int position) {
  switch (position) {
  case 4:
    return newPosition = 35;
    break;

  case 7:
    return newPosition = 23;
    break;

  case 9:
    return newPosition = 5;
    break;

  case 14:
    return newPosition = 43;
    break;

  case 17:
    return newPosition = 13;
    break;

  case 21:
    return newPosition = 3;
    break;

  case 24:
    return newPosition = 58;
    break;

  case 27:
    return newPosition = 37;
    break;

  case 34:
    return newPosition = 20;
    break;

  case 42:
    return newPosition = 11;
    break;

  case 46:
    return newPosition = 53;
    break;

  case 49:
    return newPosition = 32;
    break;

  case 63:
    return newPosition = 2;
    break;

  default:
    return newPosition = position;
  }
}
