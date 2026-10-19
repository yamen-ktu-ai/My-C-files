#include <stdio.h>

int main(void) {
    int n;
    int i = 1;

    printf("Lutfen bir n degeri girin: ");
    scanf("%d", &n);



      printf("\n");

    printf("1'den %d'e kadar ikinin kuvveti artacak sekilde olan dogal sayilar:\n", n);

    while (i <= n) {
        printf("%d ", i);
        i = i*2;
    }

    printf("\n");



    printf("1'den %d'e kadar ucun kuvveti artacak sekilde olan dogal sayilar:\n", n);

    i = 1;

    while (i <= n) {
        printf("%d ", i);
        i = i*3;
    }

    printf("\n");



    printf("1'den %d'e kadar dordun kuvveti sekilde olan dogal sayilar:\n", n);

    i = 1;

    while (i <= n) {
        printf("%d ", i);
        i = i*4;
    }


    return 0;
}