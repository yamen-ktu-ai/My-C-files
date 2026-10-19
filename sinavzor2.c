#include <stdio.h>

int main(void) {
   int not1;
   int not2;
   printf("please enter your math exam's grade : \n");
   scanf("%d", &not1);

   printf("please enter your physics exam's grade : \n");
   scanf("%d", &not2);

if (not1 > 100) { 
printf("evet ya pisagorsun\n");
}

else if (not1 = 100) {
    puts("matin kurucusu\n");
}    

else if (not1 == 99) {
    puts("sansina tukureyim 1 puan ne . mat calis\n");
}    

else if (not1 >= 90 && not1 <= 98) {
    puts("mat ustasi\n");
}

else if (not1 >= 50 && not1 < 90) {
    puts("orta matin var\n");
}
else {
    puts("acil mat calis\n");

}

if (not2 > 100) { 
printf("einstein seni ariyor\n");
}

else if (not2 == 100) {
    puts("fizigin babasi\n");
}    

else if (not2 == 99) {
    puts("sansina tukureyim 1 puan ne . fizik calis\n");
}    

else if (not2 >= 90 && not2 <= 98) {
    puts("fizik ustasi\n");
}

else if (not2 >= 50 && not2 < 90) {
    puts("fizigin orta\n");
}
else {
    puts("fizik calis\n");

}
return 0; }