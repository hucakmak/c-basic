#include "stdio.h"

char *gunisimleri(char *gundizisi[], int uzunluk, int hangigun)
{
    if (hangigun >= 1 && hangigun <= 7)
    {
        return gundizisi[hangigun-1];
    }
    else
    {
        return NULL;
    }
}



int main(){

    char *gunler[8] = {(char *)"pazartesi", (char *)"sali", (char *)"carsamba", (char *)"persembe", (char *)"cuma", (char *)"cumartesi", "pazar"};

    char *p = gunisimleri(gunler,7,5);

    if (p == NULL)
    {
        printf("NULL");
    }
    else
    {
        printf("%s",p);
    }
}



