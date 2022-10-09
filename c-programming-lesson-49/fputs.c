#include "stdio.h"

// Mod a -> Append = eklemek anlamına geliyor

int main(){
    FILE *filep;
    char text[256];
    filep = fopen("test.txt","a");
    if (filep == NULL) {
        printf("Dosya Oluşturulamadı!");
    }
    else
    {
        printf("Eklemek istediğiniz metin: ");
        fgets(text,256,stdin);
        fputs(text,filep);
        printf("Ekleme Başarılı!\n");
        fclose(filep);
    }
    return 0;
}