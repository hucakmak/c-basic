#include "stdio.h"
/*
int main()
{
    int a = 5,*ap;
    float b = 3.2,*bp;
    double c = 3.42,*cp;
    char d = 'a',*dp;
    int sayilar[5] = {1,2,3,4,5};

    int *arrayp;

    ap = &a;
    bp = &b;
    cp = &c;
    dp = &d;

    arrayp = &sayilar[4];

    printf("%p Adresindeki intin değeri %d dir.\n",ap,*ap);

    printf("%p Adresindeki floatın değeri %f dir.\n",bp,*bp);

    printf("%p Adresindeki doublein değeri %1f dir.\n",cp,*cp);

    printf("%p Adresindeki charın değeri %c dir.\n",dp,*dp);

    printf("%p Adresindeki sayıların değeri %d dir.\n",arrayp,*arrayp);

}

 */

int main(){

    int i,j =11;
    int *jp1, *jp2 = &j;

    jp1 = jp2;
    i = ++(*jp2);

    *jp2 = *jp1 +i;
    printf("i = %d,j = %d, *jp1 = %d, *jp2 = %d", i,j,*jp1,*jp2);














}