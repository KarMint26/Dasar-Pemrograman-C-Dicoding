#include <stdio.h>

int main(){
    int a, b, ans;
    char op;

    printf("\nInput First Number : ");
    scanf("%d",&a);

    printf("Input Second Number : ");
    scanf("%d",&b);

    printf("Select The Operation (*/-+) : ");
    scanf(" %c",&op); // menghapus buffer sebelumnya yaitu spasi

    switch(op){
      case '+':
	  ans = a + b;
	  printf("\nResult of the operations is %d\n", ans);
          break;
      case '-':
	  ans = a - b;
	  printf("\nResult of the operations is %d\n", ans);
	  break;
      case '/':
	  ans = a / b;
	  printf("\nResult of the operations is %d\n", ans);
	  break;
      case '*':
	  ans = a * b;
	  printf("\nResult of the operations is %d\n", ans);
	  break;
      default:
	  printf("\nSorry your operations not valid\n");
	  main();
	  break;
    }

    return 0;
}
