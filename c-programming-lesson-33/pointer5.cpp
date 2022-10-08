#include "stdio.h"



/*
int main   (){

    int sayilar[5] = {1,2,3,4,5,};

    int *p =sayilar;

    printf("%d\n",*p);
    printf("%d\n",p[1]);
    printf("%d\n",*(p+1)); // p[1] == *(p+1) -- p[3] == *(p+3)
    printf("%d\n",*(p+2));
    printf("%d\n",p[3]);
    printf("%d\n",*(p+3));

}
*/

int max(int a[], int uzunluk)
{
    int maks = a[0];

    int i;
    for (i = 1; i < uzunluk; i++) {

        if (a[i] > maks)
        {

                maks = a[i];
        }
    }
    return maks;



}
int main()
{

    int sayilar[5] = {3,4,42,100,1};

    int maks = max(sayilar,5);

    printf("Sayılar dizisinin en büyük elemanı --> %d \n",maks);

}