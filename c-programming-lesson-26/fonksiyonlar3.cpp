#include "stdio.h"

// Sayının asal olup olmadığına bakar.

int asal_mi(int sayi)
{
    int i;

    for (i = 2; i < sayi ; i++) {

        if(sayi % i == 0){
            return (0);
        }
    }
    return (1);
}

int main(){

    int n;
    printf("Bir sayı girin:");
    scanf("%d",&n);
    if(asal_mi(n) == 0)
    {
        printf("Bu sayı Asal sayı değil.\n");
    }
    else
    {
        printf("Bu sayı Asaldır.\n");
    }

    return 0;
}