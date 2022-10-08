#include "stdio.h"

int main()

{
    int toplam = 0;
    int i,j;
    int matris[3][4];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4 ; j++) {
            scanf("%d",&matris[i][j]);
        }
    }
    for (i = 0; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {

            printf("%d ",matris[i][j]);
            toplam += matris[i][j];
        }
        printf("%d ",toplam);
        toplam = 0;
        printf("\n");
    }
    return 0;
}

