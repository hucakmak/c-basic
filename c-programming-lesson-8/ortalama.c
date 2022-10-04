#include "stdio.h"

int main()
{

    int a,b,c,d,e;

    float aritmetik;

    printf("5 adet sayı giriniz:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    aritmetik = (a+b+c+d+e)/5.0;
    printf("Girdiğiniz sayıların aritmetik ortalaması  %.2f'dir\n",aritmetik);

    return 0;
}