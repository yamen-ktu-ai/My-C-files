#include <stdio.h>
#include <math.h>

// Integral fonksiyonu F(x) = (a/4)x^4 + (b/3)x^3 + (c/2)x^2 + d*x
double integral_f(double a, double b, double c, double d, double x) {
    return (a / 4.0) * pow(x, 4) + (b / 3.0) * pow(x, 3) + (c / 2.0) * pow(x, 2) + d * x;
}

int main(void) {
    double a, b, c, d, C_sabiti;
    double x1, x2, belirli_integral;

    printf("=== 3. DERECEDEN DENKLEM INTEGRAL HESAPLAYICI ===\n");
    printf("f(x) = a*x^3 + b*x^2 + c*x + d kalibi icin:\n\n");

    printf("a katsayisini girin (x^3 katsayisi): ");
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

    printf("Integral sabitini girin (C): ");
    scanf("%lf", &C_sabiti);

    // Sonuclari Ekrana Yazdirma
    printf("\n--------------------------------------------\n");
    printf("Girdiginiz Denklem: \n");
    printf("  f(x) = %.2lfx^3 %c %.2lfx^2 %c %.2lfx %c %.2lf\n\n", 
            a, 
            (b >= 0) ? '+' : '-', fabs(b),
            (c >= 0) ? '+' : '-', fabs(c),
            (d >= 0) ? '+' : '-', fabs(d));

    printf("Belirsiz Integral: \n");
    printf("  S f(x)dx = (%.2lf/4)x^4 %c (%.2lf/3)x^3 %c (%.2lf/2)x^2 %c %.2lfx %c %.2lf\n", 
            a, 
            (b >= 0) ? '+' : '-', fabs(b),
            (c >= 0) ? '+' : '-', fabs(c),
            (d >= 0) ? '+' : '-', fabs(d),
            (C_sabiti >= 0) ? '+' : '-', fabs(C_sabiti));

    printf("  Sadelesmis: \n");
    printf("  S f(x)dx = %.3lfx^4 %c %.3lfx^3 %c %.3lfx^2 %c %.2lfx %c %.2lf\n", 
            a / 4.0, 
            (b >= 0) ? '+' : '-', fabs(b / 3.0),
            (c >= 0) ? '+' : '-', fabs(c / 2.0),
            (d >= 0) ? '+' : '-', fabs(d),
            (C_sabiti >= 0) ? '+' : '-', fabs(C_sabiti));
    printf("--------------------------------------------\n\n");

    // Belirli Integral (Sinirlar arasi alan hesabi)
    printf("=== BELIRLI INTEGRAL HESABI (Sinirlar Arasi) ===\n");
    printf("Alt sinir (x1) degerini girin: ");
    scanf("%lf", &x1);

    printf("Ust sinir (x2) degerini girin: ");
    scanf("%lf", &x2);

    belirli_integral = integral_f(a, b, c, d, x2) - integral_f(a, b, c, d, x1);

    printf("\nS[%.2lf -> %.2lf] f(x) dx = %.4lf\n", x1, x2, belirli_integral);

    return 0;
}