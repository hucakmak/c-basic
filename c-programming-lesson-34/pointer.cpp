#include "stdio.h"
#include "string.h"



int benimstrlen(char *p)
{
    int uzunluk = 0;
    int i = 0;

    for (; p[i] !='\0' ; i++) {
        uzunluk++;
    }
    return  uzunluk;


}

int main(){


    char yazi[5] = "huso";
    printf("%d",benimstrlen(yazi));


}
