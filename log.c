#include <stdio.h>
#include <math.h>

int main(void) {
    double taban, ust, sonuc;

    printf("=== LOGARITMA HESAPLAYICI ===\n");
    printf("log_taban(ust) formatinda hesaplama yapar.\n\n");

    printf("Logaritma tabanini girin (b > 0 ve b != 1): ");
    scanf("%lf", &taban);

    printf("Logaritmasi alinacak sayiyi (ust) girin (a > 0): ");
    scanf("%lf", &ust);

    // Tanim kumesi kontrolleri
    if (taban <= 0 || taban == 1) {
        printf("\nHata: Logaritma tabani 0'dan buyuk olmali ve 1'e esit olamaz!\n");
        return 1;
    }

    if (ust <= 0) {
        printf("\nHata: Logaritmasi alinacak sayi 0'dan buyuk olmalidir!\n");
        return 1;
    }

    // Taban degistirme formulu: log_b(a) = ln(a) / ln(b)
    sonuc = log(ust) / log(taban);

    printf("\nSonuc: log_%.2lf(%.2lf) = %.4lf\n", taban, ust, sonuc);

    return 0;
}