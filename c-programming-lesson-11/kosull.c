#include "stdio.h"

int main(){

    int vize1,vize2,final;
    float okulortalama;
    float dersort;
    printf("1. vize:");
    scanf("%d",&vize1);
    printf("2. Vize:");
    scanf("%d",&vize2);
    printf("Final:");
    scanf("%d",&final);
    printf("Üniversite ortalamanızı girin:");
    scanf("%f",&okulortalama);
    dersort = (vize1*3/10.0 + vize2 * 3/10.0 + final * 4/10.0);

    if  (dersort >= 90){
        printf("Notunuz AA ve Ders ortalamanız : %f\n", dersort );
    }

    else if (dersort >= 85 && dersort < 90) {
        printf("Notunuz BA ve Ders ortalamanız : %f\n", dersort);
    }

    else if (dersort >= 80 && dersort < 85) {
        printf("Notunuz BB ve Ders ortalamanız : %f\n", dersort);
    }

    else if (dersort >= 75 && dersort < 80) {
        printf("Notunuz CB ve Ders ortalamanız : %f\n", dersort);
    }

    else if (dersort >= 70 && dersort < 75) {
        printf("Notunuz CC ve Ders ortalamanız : %f\n", dersort);

        if (okulortalama < 2.5)
        {
            printf("Dersi tekrar alman yararlı olacaktır. ortalaman düşük\n");
        }
    }

    else if (dersort >= 65 && dersort < 70) {
        printf("Notunuz DC ve Ders ortalamanız : %f\n", dersort);

        if(okulortalama < 2.5)
        {
            printf("Dersi tekrar alman yararlı olacaktır. Ortalaman düşük\n");
        }
    }
    else if (dersort >= 60 && dersort < 65) {
        printf("Notunuz DD ve Ders ortalamanız : %f\n", dersort);
        if(okulortalama < 2.5)
        {
            printf("Dersi tekrar almanı tavsiye ederim. ortalaman düşük\n");
        }
    }
    else
    {

        printf("Notunuz FF ders ortalamanız : %f .\n",dersort);
        printf("Dersten Kaldınız.\n");
    }
    return 0;
}