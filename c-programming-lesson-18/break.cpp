#include "stdio.h"

// Girilen sayıya kadar olan tüm pozitif çift sayıların toplamını verir.
int main()
{

    int toplam = 0;
    int i = 0;
    int sayi;
    printf("Hesaplanacak sayıyı girin:");
    scanf("%d",&sayi);

    while ( i <= sayi){

        if  (i % 2 == 1) {
            i++;
            continue;
        }
        toplam += i;
        i++;
    }

    printf("Sonuç:%d\n",toplam);
    return 0;
}