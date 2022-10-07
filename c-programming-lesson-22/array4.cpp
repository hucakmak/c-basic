#include "stdio.h"

int main()
{

    int a;
    a = 1;
    int matris[3][3];
    int i,j;

    for ( i = 0; i < 3 ; i++)
    {
        for (j = 0; j < 3 ; j++) {
            printf("%d. sayıyı giriniz : ",a);
            a++;
            scanf("%d", &matris[i][j]);
        }
    }
    for (i = 0; i < 3 ; i++) {

        for (j = 0; j < 3 ; j++)
        {
            printf("%d",matris[i][j]);
        }
        printf("\n");
    }

    return  0;
}