#include "stdio.h"
int main() {

    int a1 = 42;
    char b1 = 69;
    char b2 = 'E';
    float c1 = 4.1;
    double d1 = 0.21;
    printf("%d %c %d %.1f %.2f %s\n",a1,b1,b2,c1,d1,"selam aleyküm");


    printf("%lu byte\n",sizeof (char));
    printf("%lu byte\n",sizeof (int));
    printf("%lu byte\n",sizeof (short int));
    printf("%lu byte\n",sizeof (long int));
    printf("%lu byte\n",sizeof (float));
    printf("%lu byte\n",sizeof (double));

    return 0;
}