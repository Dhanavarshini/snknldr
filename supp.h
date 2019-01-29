
#ifndef BOARD_H_ /* Include guard */
#define BOARD_H_

#include <stdio.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGNETA "\x1b[35m"

void pr() {
  printf(ANSI_COLOR_RED
         "---------------------------------------------------------------------"
         "---------------------------------------------\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          | SNK-->40 |          |          |          "
         "|          |          |          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||    100    |    99    |    98 @~ |    97    |    96    |    95    "
         "|    94    |    93    |    92    |    91    ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          | SNK-->40@|          |          |          "
         "|          |          |          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------|------@---|----------|----------|----------|"
         "----------|----------|----------|----------||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |    @     | SNK-->58 |          |          "
         "|SNK-->49 |          |          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     81    |    82    |   @83    | ~@ 84    |    85    |    86    "
         "| ~@ 87    |    88    |    89    |    90    ||\n" ANSI_COLOR_RESET);
  printf(
      ANSI_COLOR_YELLOW
      "||               |          |  @       | S@K-->58  |          |         "
      " |SNK-->49@|          |          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------|-@--------|----@-----|----------|----------|"
         "------@---|----------|----------|----------||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          | @        |    @     |          |          "
         "|       @  |SNK-->15  |          | LAD-->92 ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     80    |    79    |@   78    |   @77    |    76    |    75    "
         "|    74 @  |    73  @~|    72    |    71    ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          |   @      |          |          "
         "|       @  |SNK-->15@ |          | LAD-->92 ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------@----------@-@--------|----------|----------|"
         "---------@|-------@--|----------|----------||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          @          |          |          |          "
         "|          |       @  |          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     61    |    62    @    63    |    64    |    65    |    66    "
         "|    67    @    68  @ |    69    |    70    ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          @          |          |          |          "
         "|          @         @|          |          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------@--------@-|----------|----------|----------|"
         "----------@----------|#-@-#-@-#@|----------||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          @        @ | LAD==>96 |SNK-->8   |          "
         "|          @          | LAD-->72@|          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     60    |    59    @    58 <@ |    57    |    56  @~|    55    "
         "|    54    @    53    |    52   @|    51    ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          @          | LAD==>96 |SNK-->8 @ |          "
         "|          @          | LAD-->72@|          ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|---@-@-@-@|----------|----------|------@---|----------|"
         "----------|----------@---------@|----------||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |  @       | SNK-->17 |          |      @   |          "
         "|          |          |        @ |SNK-->5   ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     41    |  @ 42    |    43 ~@ |    44    |    45 @  |    46    "
         "|    47    |    48    @ @> 49 @  |    50~@  ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |  @       |SNK-->17 @|          |        @ |          "
         "|          |          |       @  |SNK-->5 @ ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|-@--------|---------@|----------|--------@-|----------|"
         "----------|----------|------@---|--------@-||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          @          |          |          "
         "|          |          |    @     |         @||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     40  <@|    39    |    38    @    37    |    36    @    35    "
         "|    34    |    33    |   @32    |    31   @||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          @          |          |          "
         "|          |          |   @      |         @||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------|----------@----------|----------|@---------|"
         "----------|----------|--@-------|--------@-||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          @          |          |@LAD-->59 "
         "|          |          | @        |        @ ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     21    |    22    |    23    @    24    |    25    |@   26    "
         "|    27    |    28    | @  29    |    30  @ ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          @          |          |@LAD-->59 "
         "|          |          | @        |        @ ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------|----------|-#--------|----------|@-------#-@"
         "----------|----------|----------|--------@-||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          | @        |          |@         "
         "|          |          |          |        @ ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||     20    |    19    |    18    | @> 17    |    16    |@   15 <@ "
         "|    14    |    13    |    12    |    11 @  ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          |          |          |@         "
         "|          |          |          |       @  ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-----------|----------|----------|----------|----------|----------@"
         "-#-@-#-@-#|@-#-------|----------|-------@--||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_YELLOW
         "||           |          |          |          |          | LAD-->45 "
         "|          |          |          |       @  ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_GREEN
         "||      1    |     2    |     3    |     4    |     5  <@|     6    "
         "|     7    | @>  8    |     9    |    10 @  ||\n");
  printf(ANSI_COLOR_YELLOW
         "||           |          |          |          |          | LAD-->45 "
         "|          |          |          |       @  ||\n" ANSI_COLOR_RESET);
  printf(ANSI_COLOR_RED
         "||-------------------------------------------------------------------"
         "-------------------------------------------||\n" ANSI_COLOR_RESET);
}

#endif // FOO_H_
