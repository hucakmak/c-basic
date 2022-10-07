#include "stdio.h"

int main()
{

    int islem;
    int bakiye = 1000;
    int tutar;

    printf("İslemler \n1:Para çekme\n2:Para Yatırma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart iade\n\n\n");

    printf("işlem Seçiniz:");
    scanf("%d",&islem);

    switch (islem) {

        case 1:
            printf("Bakiyeniz %d\n",bakiye);
            printf("Çekilecek tutar:");
            scanf("%d",&tutar);
            if (tutar > bakiye)
            {
                printf("Bakiye yetersiz\n");
            }
            bakiye -= tutar;
            printf("Bakiyeniz %d\n",bakiye);
            break;
        case 2:
            printf("Bakiyeniz %d\n", bakiye);
            printf("Yatırılacak tutar:");
            scanf("%d", &tutar);

            bakiye += tutar;
            printf("Bakiyeniz %d\n", bakiye);
            break;

        case 3:
            printf("Bakiyeniz %d\n", bakiye);
            printf("Havale yapılacak tutar:");
            scanf("%d", &tutar);
            if (tutar > bakiye) {
                printf("Bakiye yetersiz\n");
            }
            break;

        case 4:

            printf("Bakiyeniz %d\n", bakiye);
            break;

        case 5:

            printf("Kart iade edildi\n");
            break;

        default:
            printf("Bilinmeyen işlem.");
            break;



    }


}