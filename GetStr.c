#include <stdio.h>

int main(){
  char name[100];

  printf("\nWhat's Your Name : ");

  int i = 0;
  char c;
  while((c = getchar()) != '\n'){
    name[i] = c;
    i++;
  }

  name[i] = '\0';
  printf("Hello %s!\n", name);

  return 0;
}
