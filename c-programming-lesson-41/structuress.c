#include "stdio.h"

struct Araba {

    int     tekerleksayisi;
    int     vitessayisi;
    int     model;
    float   motor;
    int     beygir;

}bank,araba1,araba2;

int main(){

    struct Araba bank = {4,6,2011,3.0,300};
    araba2 = bank;
    printf("%d %d %d %.2f %d",araba2.tekerleksayisi,araba2.vitessayisi,araba2.model,araba2.motor,araba2.beygir);
}