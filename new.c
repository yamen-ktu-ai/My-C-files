#include <stdio.h>

int main(void) {
  int a;
  int b;
  int c;
  int d;

  printf("enter the first no : ");
  scanf("%d", &a);

  printf("enter the 2nd no : ");
  scanf("%d", &b);

  printf("enter the 3rd no : ");
  scanf("%d", &c);

  printf("enter the 4th no : ");
  scanf("%d", &d);

  int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("Largest: %d\n", max);



    
    return 0;

}