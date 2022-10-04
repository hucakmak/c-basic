#include "stdio.h"
int main() {
    int note;
    printf("Notunuzu giriniz:");
    scanf("%d", &note);

    if (note > -1)
    {

        if (note < 101) {
            if (note > 60) {
                printf("Tebrikler! Dersi geçtiniz.\n");
            } else {
                printf("Lanet olsun adamım ! 1 sene daha beraberiz.\n");
            }
            return 0;
        } else {
            printf("Damn! Gerçekci ol adamım. Hadi tekrar dene !\n");
            return 0;
        }
    }
    else
    {
        printf("Ohh Maaan! You really ? Come in your next life...\n");
    }
    return 0;
}