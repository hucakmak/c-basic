#include "stdio.h"
int main()
{
    int x;
    int y;
    int a;

    x = 2;
    y = 3;
    a = 1;
    printf("%d\n%d\n%d\n",x,y,a);
    printf("----------------------------------------------\nX Y A YENİ HALLERİ\n----------------------------------------------\n");

    x = y;
    a = x + y;

    printf("%d\n%d\n%d\n",x,y,a);


    return 0;

}