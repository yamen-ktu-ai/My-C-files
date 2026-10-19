#include <stdio.h>

int main(void) {
   double pi = 3.14;
   double num1;
   double num2;
   double num3;
   
   
    printf("kurenin yaricapini giriniz: ");
    scanf("%lf", &num1);

    printf("silindirin yaricapini giriniz: ");
    scanf("%lf", &num2);

    printf("silindirin yuksekligini giriniz: ");
    scanf("%lf", &num3);


    double Vk = 4 * pi * num1 * num1 * num1 / 3;
    double Vs = pi*num2*num2*num3;

    printf("kurenin hacmi : %lf , silindirin hacmi : %lf", Vk , Vs);

    

    return 0;

}