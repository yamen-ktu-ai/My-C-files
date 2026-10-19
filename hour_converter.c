#include <stdio.h>

int main() {
    int total_m;

    printf("Enter minutes: ");
    scanf("%d", &total_m);

    printf("%d hours and %d minutes\n", total_m / 60, total_m % 60);

    return 0;
}