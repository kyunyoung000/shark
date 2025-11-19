#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE    6


int rolldie(void)
{
    return rand()%MAX_DIE + 1;
}


int main(int argc, char *argv[])
{
    int cnt;
    int pos;
    int coinresult;
    
    srand( (unsigned)(time(NULL)) );
  
  //OPENING
  printf("=====================================================\n");
  printf("*****************************************************\n");
  printf("              SHARK ISLAND GAME START                \n");
  printf("*****************************************************\n");
  printf("=====================================================\n");
  
  //step.1.player name setting, variables
  board_initBoard();
  
  //step.2. turn play(do-while)
  cnt = 0;
  pos = 0;
  int coinResult = 0;
  do{
      int die_result;
      
      
      //2-1. status printing
      board_printBoardStatus();
      
      //2-2. roll die  
      die_result = rolldie();
      
      //2-3. move(result)
      pos += die_result;
      
      printf("pos : %i (die: %i)\n", pos, die_result);
      
      coinResult += board_getBoardCoin(pos);
      
      printf("coin : %i\n", coinResult);
      
      cnt++;
  
  } while (cnt < 5);
  
  
  //step.3. game end(winner printing)
  
  
  
  
  
  
  //ENDING
  printf("\n\n\n\n\n\n\n\n\n\n");
  printf("=====================================================\n");
  printf("*****************************************************\n");
  printf("               SHARK ISLAND GAME END                 \n");
  printf("*****************************************************\n");
  printf("=====================================================\n");
  
  system("PAUSE");	
  return 0;
}
