#include <stdio.h>
#include <stdlib.h>

int main(){
  int count = 0, num;
  char str[10];

  printf("Who are you?\n> ");
  scanf("%s",str);
  printf("Hello, %s!\n",str);
  
  printf("Tossing a coin...\n");

  srand((unsigned int)time(NULL));
  
  for(int i = 0; i < 3; i++){
    num = rand() % 2;
    if(num == 0){
      printf("Round %d: Heads\n",i+1);
      count++;
    }
    else if(num == 1){
      printf("Round %d: Tails\n",i+1);
    }
  }
  printf("Heads: %d, Tails: %d\n",count,3-count);
  
  return 0;
}
