#include "stdio.h"
#include "string.h"

int main(){

    char veri[25];
    int i;
    scanf("%s",veri);
    int uzunluk = strlen(veri);
    FILE *filep = fopen("huseyindosya.txt","w");

    if (filep == NULL)
    {
        printf("Dosya oluşturulamadı! \n");
    }
    else
    {
        for (i = 0; i < uzunluk; i++) {

            fputc(veri[i],filep);
            printf("Yazılan Karakter %c\n",veri[i]);


        }
        printf("Dosya başarıyla yazdırıldı ! \n");
        fclose(filep);

    }

}