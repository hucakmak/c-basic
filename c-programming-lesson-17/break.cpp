#include "stdio.h"

int main(){

    int toplam = 0;
    int i;
    int sayi;

    for (i = 0; true; i++) {

        printf("Sayıyı giriniz : (Çıkmak için -1 e basın)");
        scanf("%d",&sayi);

        if (sayi == -1)
        {
            break;
        }
        toplam += sayi;
    }
    printf("%d\n",toplam);
    return 0;
}