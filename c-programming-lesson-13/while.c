#include "stdio.h"

int main()
{
    // float şeklinde yapma sebebimiz yüksek değerlerdeki sayıları hesaplayabilmektir.
    // int olursa eğer Yüksek sayılarda - Değer veya yanlış değer verecektir.
    int n;
    float fact = 1.0;

    printf("Faktöryel değerini bulmak istediğiniz sayıyı girin:");
    scanf("%d",&n);

    while (n != 0)
    {
        fact = fact *n;
        n--;
    }
    printf("%.0f\n",fact);

    return 0;
}