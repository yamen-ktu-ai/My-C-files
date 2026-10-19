#include <stdio.h>

int main(void) {
   int num1;
   int num2;
   
   
    printf("dikdortgenin tabanini giriniz: ");
    scanf("%d", &num1);

    printf("yukseklik nedir: ");
    scanf("%d", &num2);

    int alan = num1 * num2;
    int cevre = (num1 + num2)*2;

    printf("alan = %d ve cevre = %d", alan, cevre);

    return 0;

}