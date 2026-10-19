#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d;      // Ana denklem katsayilari: ax^3 + bx^2 + cx + d
    double a_turev, b_turev, c_turev; // Turev denklem katsayilari: A x^2 + B x + C
    double delta, x1, x2;

    printf("=== 3. DERECEDEN DENKLEM TUREV HESAPLAYICI ===\n");
    printf("f(x) = a*x^3 + b*x^2 + c*x + d kalibi icin:\n\n");

    printf("a katsayisini girin (x^3 bas katsayisi): ");
    scanf("%lf", &a);

    if (a == 0) {
        printf("\nHata: 'a' katsayisi 0 olamaz!\n");
        return 1;
    }

    printf("b katsayisini girin (x^2 katsayisi): ");
    scanf("%lf", &b);

    printf("c katsayisini girin (x katsayisi): ");
    scanf("%lf", &c);

    printf("d katsayisini girin (Sabit terim): ");
    scanf("%lf", &d);

    // Turev Alma Islemi: f'(x) = (3*a)x^2 + (2*b)x + c
    a_turev = 3 * a;
    b_turev = 2 * b;
    c_turev = c;

    // Sonuclari Ekrana Yazdirma
    printf("\n--------------------------------------------\n");
    printf("Girdiginiz Denklem: \n");
    printf("  f(x) = %.2lfx^3 %c %.2lfx^2 %c %.2lfx %c %.2lf\n\n", 
            a, 
            (b >= 0) ? '+' : '-', fabs(b),
            (c >= 0) ? '+' : '-', fabs(c),
            (d >= 0) ? '+' : '-', fabs(d));

    printf("Denklemin 1. Turevi: \n");
    printf("  f'(x) = %.2lfx^2 %c %.2lfx %c %.2lf\n", 
            a_turev, 
            (b_turev >= 0) ? '+' : '-', fabs(b_turev),
            (c_turev >= 0) ? '+' : '-', fabs(c_turev));
    printf("--------------------------------------------\n\n");

    // Turevin koklerini bulma (Ekstremum noktalari)
    printf("=== TUREVIN KOKLERI (Ekstremum Noktalari) ===\n");
    delta = (b_turev * b_turev) - (4 * a_turev * c_turev);

    if (delta > 0) {
        x1 = (-b_turev + sqrt(delta)) / (2 * a_turev);
        x2 = (-b_turev - sqrt(delta)) / (2 * a_turev);
        printf("Turevin iki farkli reel koku var (f'(x) = 0):\n");
        printf("  x1 = %.2lf\n", x1);
        printf("  x2 = %.2lf\n", x2);
        printf("-> Ana fonksiyon bu x degerlerinde yerel maksimum/minimum yapar.\n");
    } else if (delta == 0) {
        x1 = -b_turev / (2 * a_turev);
        printf("Turevin tek (casisik) reel koku var (f'(x) = 0):\n");
        printf("  x1 = x2 = %.2lf\n", x1);
        printf("-> Ana fonksiyonda bukum/donum noktasi olabilir.\n");
    } else {
        printf("Turevin reel koku yoktur (f'(x) = 0 denkleminin deltasi < 0).\n");
        printf("-> Ana fonksiyon daima artan veya daima azalandir.\n");
    }

    return 0;
}