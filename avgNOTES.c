#include <stdio.h>
int main(){
    int total = 0;
    int counter = 1;

    while (counter <= 7)
    {
       printf("Enter a grade kid : ");
       int grade = 0;
       scanf("%d", &grade);
       total = total + grade;
       counter = counter + 1;
        
    }

    int avg = total / 7;
    printf("The average of these grades are %d", avg);
    








 return 0;
}