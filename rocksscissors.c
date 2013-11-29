#include <stdio.h>
#define ROCK 0
#define PAPER 1
#define SCISSORS 2

int main(void){
  //winnerGrid has values
  //0, 1 and 2 in it.  
  //dimension one is what player 1 did
  //dimension two is what palyer 2 did
  int winnerGrid[3][3]={ {0,2,1},
			 {1,0,2},
			 {2,1,0}};
  int p1choice;
  int p2choice;
  printf("p1 choose (0 for rock, 1 for paper, 2 for scissors): ");
  scanf("%d",&p1choice);
  printf("p2 choose (0 for rock, 1 for paper, 2 for scissors): ");
  scanf("%d",&p2choice);
  if(winnerGrid[p1choice][p2choice] == 0){
    printf("tie\n");
  }
  else if(winnerGrid[p1choice][p2choice] == 1){
    printf("p1 won\n");
  }
  else{
    printf("p2 won\n");
  }
}
