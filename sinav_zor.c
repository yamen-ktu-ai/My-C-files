#include <stdio.h>

int main(void) {
   int not;
   printf("please enter your exam's grade : ");
   scanf("%d", &not);

if (not > 100) { 
printf("aynen knk");
}

else if (not >= 90 && not <= 100) {
    puts("inek");
}

else if (not >= 50 && not < 90) {
    puts("yaniii");
}
else {
    puts("calis sana ");

}
return 0; }