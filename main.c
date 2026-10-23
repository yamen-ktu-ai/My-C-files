#include <stdio.h>
int main(void){
    int a;
    int b;
    
    
    printf("type 1 for convert cels to fah , 2 for fah to cels : ");
    scanf("%d", &a);

    if(a != 1 && a != 2) {

        printf ("pls write only 1 or 2");
        return 0;
    }
    if (a == 1){
    printf("enter the cels temp : ");
    scanf("%d", &b);
}

 if (a == 2){
    printf("enter the fah temp : ");
    scanf("%d", &b);
}

    switch (a) {
     case 1:
     printf("%d cels is %d fah", b, (b * 9 / 5 + 32));
     break ;

    case 2:
    printf("%d fah is %d cels", b, (b - 32) * 5 / 9);
    break ;


    }












    return 0;


    }
    












