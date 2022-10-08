#include "stdio.h"

/*

 struct etiketadi {
 degiskentipi degisken1;
 degiskentipi degisken2;
 degiskentipi degisken3;
 ...
 ..
 .
 */
struct bank{
    char unvan[20];
    char gorev[300];
    int maas;
    int sure;
};

int main(){

    struct  bank huseyin = {"Ceo","Şirketin Yönetimini sağlamak",19000,7};
            printf("Konumu: %s\nGörevi: %s\nAldığı Maaş: %d TL\nGünlüç çalışma süresi: %d Saat\n",huseyin.unvan,huseyin.gorev,huseyin.maas,huseyin.sure);

}