#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double delta, x1, x2, reelKisim, sanalKisim;

    printf("=== IKINCI DERECEDEN DENKLEM KOK BULUCU ===\n");
    printf("(ax^2 + bx + c = 0 formati icin)\n\n");

    printf("a katsayisini girin: ");
    scanf("%lf", &a);

    if (a == 0) {
        printf("Hata: 'a' katsayisi 0 olamaz! Bu 1. dereceden bir denklem olur.\n");
        return 1;
    }

    printf("b katsayisini girin: ");
    scanf("%lf", &b);

    printf("c katsayisini girin: ");
    scanf("%lf", &c);

    
    delta = b * b - 4 * a * c;

    printf("\nDiskriminant (Delta) = %.2lf\n\n", delta);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Denklemin iki farkli reel koku vardir:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Denklemin birbirine esit (casisik) tek bir reel koku vardir:\n");
        printf("x1 = x2 = %.2lf\n", x1);
    } 
    else {
        reelKisim = -b / (2 * a);
        sanalKisim = sqrt(-delta) / (2 * a);
        printf("Denklemin reel koku yoktur. Iki karmasik (sanal) koku vardir:\n");
        printf("x1 = %.2lf + %.2lfi\n", reelKisim, sanalKisim);
        printf("x2 = %.2lf - %.2lfi\n", reelKisim, sanalKisim);
    }

    return 0;
}