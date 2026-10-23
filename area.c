#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int no1;
  int no2;
  int no3;

  printf("enter the first side length : ");
  scanf("%d", &no1);

  printf("enter the 2nd side length : ");
  scanf("%d", &no2);

  printf("enter the 3rd side length : ");
  scanf("%d", &no3);
  
  if (no1 <= 0 || no2 <= 0 || no3 <= 0) {
    printf("all the sides should be positive");

    return 0;
  }
  if (!(abs(no1 - no2) < no3 && no3 < (no1 + no2))) {
  
    printf("enter a vaild triangle's sides");
    return 0;
  }

  if (no1 == no2 || no1 == no2 || no2 == no3 ) {
    printf("this triangle is  isosceles");
  }
  else if (no1 == no2 && no2 == no3) {
    printf("this triangle is equilateral");
  }
  else {
    printf("this triangle is scalene");
  }

  












    return 0;

}