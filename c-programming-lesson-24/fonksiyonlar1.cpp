#include "stdio.h"

void hatagosternegatif()
{
    printf("Hata! Sayı pozitif değil.\n");
}

void hatagostertek()
{
    printf("Hata! Sayı çift değil.\n");
}


int main()
{
    int a;

    printf("çift ve pozitif sayı giriniz:");
    scanf("%d",&a);

    if (a > -1) {
        if (a % 2 == 1) {
            hatagostertek();

        } else {
            printf("Tamamdır\n");
        }
    }
    else
    {
        hatagosternegatif();
    }
    return 0;
}