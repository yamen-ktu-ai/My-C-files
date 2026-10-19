#include  <stdio.h>
int main(){
int n;
int x = 1;

printf("just enter a number and i will count from 1 until that number : " , n);
scanf("%d", &n);

printf("the numbers from 1 until %d are :\n", n);

while (x <= n) {
 printf("%d ", x);
 x = x + 1;
}

printf("\n");









    return 0;
}