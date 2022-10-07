#include "stdio.h"

int main(){

    int sayilar [] = {1,2,3,4,5,6,7,8,9};
    int i = 0;
    int limit;

    printf("Kaçıncı indexe kadar basılsın ? ==>");
    scanf("%d",&limit);

        for (; i < limit; i++) {

            printf("%d\n", sayilar[i]);
        }
    return  0;
}