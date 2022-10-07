#include "stdio.h"

int main()
{
 // 10 haneli sayılara kadar yardımcı olmaktadır sonrasında hata verecektir
 // çünkü int değerlerin max basamak sayısı 10 dur
    int n,hane = 0, toplam = 0;

    printf("Sayıyı giriniz:");
    scanf("%d",&n);

    do {
        toplam += (n %10);
        hane++;
        n = n / 10;
    } while (n > 0);

    printf("Rakamları toplamı %d %d Haneli\n}", toplam,hane);

    return 0;
}