#include <stdio.h>

int main(){
  int i;
  int tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
  int min, avg = 0, max, modus = 0, median;
 
  min = tab[0];
  max = tab[0];
  for(i = 1; i < 10; i++){
    if(min > tab[i]){
      min = tab[i];
    }
    if(max < tab[i]){
      max = tab[i];
    }
    avg += tab[i];
  }

  avg /= 10;

  for(i = 0; i < 10; i++){
    if(tab[i] == max){
      modus++;
    }
  }

  median = tab[(10/2)-1];

  printf("Min Value is %d\n", min);
  printf("Max Value is %d\n", max);
  printf("Average point is %d\n", avg);
  printf("Nilai max(%d) banyak elemen tabel : %d\n", max, modus);
  printf("Nilai tengah atau median : %d\n", median);

  return 0;
}
