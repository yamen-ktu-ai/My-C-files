#include <stdio.h>

int main() {
  
  int slr;
  int yr;

  printf("enter the current salary : ");
  scanf("%d", &slr);

  if (slr < 0) {
    printf("dont write a negative number");

    return 0;
  }

  printf("enter the years of exp: ");
  scanf("%d", &yr);

  if (yr < 2 && 0 <= yr) {
printf("there is no any bonus");

  }

  if (2 <= yr && yr <= 5) { 
slr = slr * 1.05;
printf("the final salary is %d" , slr);


  }

  if (5 <= yr) {
slr = slr * 1.1;
printf("the final salary is %d" , slr);

  }

  if (yr < 0){

    printf("thats cannot be true buddy");
  }


  return 0;

}