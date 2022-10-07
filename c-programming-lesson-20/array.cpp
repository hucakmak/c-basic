#include "stdio.h"

int main(){
    float toplam = 0.0;

    float sayilar[5];
    int i;
    for (i = 0; i < 5;i++)
    {
        printf("Bir sayı giriniz:");
        scanf("%f",&sayilar[i]);
    }
    for (i = 0; i <5 ; i++)
    {
        toplam += sayilar[i];
    }
    printf("girdiğiniz sayıların aritmetik ortalaması %.2f dir",toplam / 5);

    return 0;

}