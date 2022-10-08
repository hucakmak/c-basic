#include "stdio.h"

int main(){

    int i = 5;

    int *p = &i;
    printf("%p\n",p);

    printf("%d\n",*p);

// & değişkenin adres bilgisini veriyor
// * adresteki değeri veriyor
    return  0;
}