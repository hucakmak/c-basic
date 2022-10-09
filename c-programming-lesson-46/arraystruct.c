#include "stdio.h"
#include "string.h"
struct ogrenci{

    char isim[20];
    char soyisim[20];
    int numara;

};
struct ogrenci *degerAl(struct ogrenci *p){

    strcpy(p->isim,"huseyin");
    strcpy(p->soyisim,"cakmak");
    p->numara =55;

    return p;
}



void    goster(struct ogrenci *p){

    printf("Ogrencinin bilgileri\nİsim: %s\nSoyisim: %s\nNumara: %d\n",p->isim,p->soyisim,p->numara);

}

int main(){
    struct ogrenci *tut;
    struct ogrenci ogrenci1 ={"huseyin","cakmak",55};
    tut = degerAl(&ogrenci1);
    printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);


}