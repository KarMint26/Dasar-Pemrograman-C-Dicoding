#include <stdio.h>

int main(){
  /* Kamus */
  int i;
  /* Program */
  i = 3;
  printf ("Nilai i :%d %d\n", i, i++);
  i = 3;
  printf ("%d\n", ++i); /* sebelum dicetak, nilai i ditambah 1 */
 
  return 0;
}
