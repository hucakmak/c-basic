#include "stdio.h"
#include <string.h>

struct Address{

    char mahalle[40];
    char cadde[30];
    char sokak[30];

};
struct ogrenci{
        char isim[20];
        char soyisim[20];
        int numara;
        int yas;
        struct Address adres;
};

int main(){
    struct ogrenci ogrenci1;
    strcpy(ogrenci1.isim,"Huseyin");
    strcpy(ogrenci1.soyisim,"cakmak");
    ogrenci1.numara = 55;
    ogrenci1.yas = 24;
    strcpy(ogrenci1.adres.mahalle,"Ocaklı Mahallesi");
    strcpy(ogrenci1.adres.cadde,"Kiremit Ocağı Caddesi ");
    strcpy(ogrenci1.adres.sokak,"Necip fazıl Sokak ");

    printf("İsim: %s\nSoyisim: %s\nNumara: %d\nYaş: %d\nMahalle: %s\nCadde: %s\nSokak: %s\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
    return 0;
}