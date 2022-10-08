#include "stdio.h"

#define MAX 50

void    insertionsort(int arr[],int size)
{

    int i,j;
    int element;

    for (i = 1;i < size;i++) {

        element = arr[i];
        j = i-1;

        while (j >=0 && arr[j] > element)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element;
    }
}

int main(){

    int array[MAX],size;
    int i;
    printf("Kaç elemanlı ? ");
    scanf("%d",&size);

    for (i = 0; i < size ; i++) {
        scanf("%d",&array[i]);
    }
    insertionsort(array,size);

    for(i=0; i < size;i++)
    {
        printf("%d ", array[i]);
    }
    return  0;
}