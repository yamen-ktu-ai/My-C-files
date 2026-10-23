#include <stdio.h>

int main() {
    int no;

    printf("Lutfen bir gun numarasi soyle (1-7) : ");
    scanf("%d", &no);

    if (no < 1 || no > 7) {
        puts("Oku sana soruyu!");
        return 0;
    }

    switch (no) {
    
        case 7:
            puts("Sunday");
            break;

        case 6:
            puts("Saturday");
            break;

            puts("Friday");
            break;

        case 4:
            puts("Thursday");
            break;

        case 3:
            puts("Wednesday");
            break;

        case 2:
            puts("Tuesday");
            break;

        case 1:
            puts("Monday");
            break;

    

        default:
        
            break;
    }

    return 0;
}