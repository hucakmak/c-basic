#include "stdio.h"
int main()
#define PI 3.14
{

    int yaricap;
    float hacim;

    printf("Kürenin yarıçapını giriniz:");
    scanf("%d",&yaricap);

    hacim = 4/3.0*PI*(yaricap*yaricap*yaricap);
    printf("Kürenin hacmi %f'dir\n",hacim);


 return 0;
}