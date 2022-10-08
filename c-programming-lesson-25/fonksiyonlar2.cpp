#include "stdio.h"
/*
 // 2 sayının toplamını veren program.

int topla(int sayi1, int sayi2)
{
    return (sayi1 + sayi2);
}

int main()
{
    int sayi1;
    int sayi2;

    printf("Birinci sayıyı girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayıyı girin: ");
    scanf("%d",&sayi2);
    printf("Toplam: %d\n",topla(sayi1,sayi2));
}
 */

int faktoryel(int sayi){


    int  fact =1;
    for (; sayi > 0; sayi--) {

        fact *=sayi;
    }
    return fact;
}

int main()
{
    int n;
    printf("Faktoryel için sayı girin: ");
    scanf("%d",&n);
    printf("%d! = %d\n",n, faktoryel(n));

}