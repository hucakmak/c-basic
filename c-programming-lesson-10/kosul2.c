#include "stdio.h"

int main  ()
{
    int vize1, vize2,final;
    float dersort;

    printf("1. Notunuzu girin:");
    scanf("%d",&vize1);

    printf("2. Notunuzu girin:");
    scanf("%d",&vize2);

    printf("final notunuzu girin:");
    scanf("%d",&final);

    dersort = (vize1 + vize2 + final) / 3.0;
    if (dersort > 50)
    {
        printf("Dersten geçtiniz :)\n");
    }
    else
    {
        printf("Dersten kaldınız :(\n");
    }
    return  0;
}