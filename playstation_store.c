#include <stdio.h>

int main() {
  
  float price = 35500.45;
  int quantity;
  char currency[] = "TL";
  float total;

  printf("how many ps5 do you want? : ");
  scanf("%d" , &quantity);

  total = quantity * price;
  
  printf("the total will be %.2f %s", total, currency);

  return 0;

}